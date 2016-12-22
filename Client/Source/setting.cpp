#include <fstream>
#include "setting.h"
#include "ui_setting.h"

Setting::Setting(QWidget *parent, string& server_ip_, int& server_port_) 
	: QMainWindow(parent), ui(new Ui::Setting), server_ip(server_ip_), server_port(server_port_)
{
	ui->setupUi(this);
	std::ifstream fin("connection.dat");
	if(fin.is_open()){
		char temp[256];
		temp[0]='\0';
		int port;
		fin>>temp;
		fin>>port;
		ui->server_ip->setText(QString(temp));
		ui->server_port->setValue(port);
		fin.close();
	}
	else{
		ui->server_ip->setText(QString(DEFAULT_IP));
		ui->server_port->setValue(DEFAULT_PORT);
	}
	server_ip=string(ui->server_ip->text().toUtf8().constData());
	server_port=ui->server_port->value();
	connect(ui->buttonBox, SIGNAL (accepted()), this, SLOT (confirm()));
	connect(ui->buttonBox, SIGNAL (rejected()), this, SLOT (hide()));
}
Setting::~Setting(){
	delete ui;
}
void Setting::confirm(){
	server_ip=string(ui->server_ip->text().toUtf8().constData());
	server_port=ui->server_port->value();
	std::ofstream fout("connection.dat");
	fout<<server_ip<<endl<<server_port;
	fout.close();
	hide();
}
void Setting::resizeEvent(QResizeEvent* event){
	QMainWindow::resizeEvent(event);
	ui->verticalWidget->setGeometry((width()-ui->verticalWidget->width())/2,(height()-ui->verticalWidget->height())/2,ui->verticalWidget->width(),ui->verticalWidget->height());
}