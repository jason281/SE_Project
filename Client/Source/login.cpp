#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent = NULL,SE_winsock2 *ptr = NULL) 
	: QMainWindow(parent), ui(new Ui::Login), socket_ptr(ptr), setting_window(parent, server_ip, server_port)
{
	socket_ptr->initialize(server_ip.c_str(), server_port);
	ui->setupUi(this);
	connect(ui->setting_button, SIGNAL (released()), this, SLOT (setting_show()));
	connect(ui->login_button, SIGNAL (released()), this, SLOT (button_login_pressed()));
	connect(ui->account, SIGNAL (returnPressed()), this, SLOT (button_login_pressed()));
	connect(ui->password, SIGNAL (returnPressed()), this, SLOT (button_login_pressed()));
}
Login::~Login(){
	delete ui;
}
void Login::setting_show(){
	setting_window.show();
}
void Login::button_login_pressed(){
	if(!socket_ptr->testifconnect())
		if(!socket_ptr->initialize(server_ip.c_str(), server_port)){
			//print out error message
			//server_ip or server_port invalid
			cout<<"server_ip or server_port invalid\n";
			return;
		}
	short operation=1;
	socket_ptr->SE_send(&operation,sizeof(short));	//operation = 1
	
	size_t size=ui->account->text().size()+1;
	socket_ptr->SE_send(&size,sizeof(size_t));
	socket_ptr->SE_send(ui->account->text().data(), size*sizeof(QChar));
	size=ui->password->text().size()+1;
	socket_ptr->SE_send(&size,sizeof(size_t));
	socket_ptr->SE_send(ui->password->text().data(), size*sizeof(QChar));
	
	short status=0;
	socket_ptr->SE_recv(&status, sizeof(short));
	if(status){
		mainwindow_window->retrive_info();
		mainwindow_window->refresh();
		hide();
		mainwindow_window->show();
	}
}
void Login::setMainWindow(MainWindow* ptr){
	mainwindow_window=ptr;
}