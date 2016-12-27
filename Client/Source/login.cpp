#include <fstream>
#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent = NULL,SE_winsock2 *ptr = NULL) 
	: QMainWindow(parent), ui(new Ui::Login), socket_ptr(ptr), setting_window(parent, server_ip, server_port)
{
	char account[256];
	char passwd[256];
	account[0]='\0';
	passwd[0]='\0';
	socket_ptr->initialize(server_ip.c_str(), server_port);
	ui->setupUi(this);
	std::fstream fs;
	fs.open("rem.dat",std::fstream::in);
	if(fs.is_open()){
		fs>>account;
		fs>>passwd;
		ui->account->setText(QString(account));
		ui->password->setText(QString(passwd));
		fs.close();
	}
	else{
		ui->account->clear();
		ui->password->clear();
	}
	ui->hint->setVisible(false);
	ui->hint->setTextColor(QColor(255,0,0));
	connect(ui->setting_button, SIGNAL (released()), this, SLOT (setting_show()));
	connect(ui->login_button, SIGNAL (released()), this, SLOT (button_login_pressed()));
	connect(ui->account, SIGNAL (returnPressed()), this, SLOT (button_login_pressed()));
	connect(ui->password, SIGNAL (returnPressed()), this, SLOT (button_login_pressed()));
}
Login::~Login(){
	delete ui;
}
void Login::resizeEvent(QResizeEvent* event){
	QMainWindow::resizeEvent(event);
	ui->verticalWidget->setGeometry((width()-ui->verticalWidget->width())/2,(height()-ui->verticalWidget->height())/2,ui->verticalWidget->width(),ui->verticalWidget->height());
	ui->hint->setGeometry((width()-ui->hint->width())/2,ui->verticalWidget->pos().y()-ui->hint->height()-10,ui->hint->width(),ui->hint->height());
}
void Login::setting_show(){
	setting_window.show();
}
void Login::button_login_pressed(){
	if(!socket_ptr->testifconnect()){
		if(!socket_ptr->initialize(server_ip.c_str(), server_port)){
			cout<<"server_ip or server_port invalid\n";
			ui->hint->setVisible(true);
			ui->hint->setText(QString("Server IP or port invalid"));
			return;
		}
	}
	short operation=1;
	socket_ptr->SE_send(&operation,sizeof(short));	//operation = 1
	
	size_t size=ui->account->text().size()+1;
	socket_ptr->SE_send(&size,sizeof(size_t));
	socket_ptr->SE_send(ui->account->text().toUtf8().constData(), size);
	size=ui->password->text().size()+1;
	socket_ptr->SE_send(&size,sizeof(size_t));
	char temp[size];
	strcpy(temp,ui->password->text().toUtf8().constData());
	for(int i=0;i<size;i++)
		temp[i]=temp[i]^(char)size;
	socket_ptr->SE_send(temp, size);
	
	short status=3;
	socket_ptr->SE_recv(&status, sizeof(short));
	if(status==0){
		if(ui->remember->isChecked()){
			std::fstream fs;
			fs.open("rem.dat",std::fstream::out | std::fstream::trunc);
			fs<<ui->account->text().toUtf8().constData()<<endl;
			fs<<ui->password->text().toUtf8().constData();
			fs.close();
		}
		mainwindow_window->retrive_info();
		mainwindow_window->show();
		mainwindow_window->resize(800,600);
		mainwindow_window->refresh();
		ui->hint->setVisible(false);
		hide();
	}
	else if(status==1){
		ui->hint->setVisible(true);
		ui->hint->setText(QString("User not found"));
	}
	else if(status==2){
		ui->hint->setVisible(true);
		ui->hint->setText(QString("Password incorrect"));
	}
	else if(status==3){
		ui->hint->setVisible(true);
		ui->hint->setText(QString("Lost Connection"));
	}
}
void Login::setMainWindow(MainWindow* ptr){
	mainwindow_window=ptr;
}