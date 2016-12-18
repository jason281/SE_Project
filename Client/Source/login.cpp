#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent = NULL,SE_winsock2 *ptr = NULL) 
	: QMainWindow(parent), ui(new Ui::Login), socket_ptr(ptr)
{
	ui->setupUi(this);
	connect(ui->login_button, SIGNAL (released()), this, SLOT (button_login_pressed()));
}
Login::~Login(){
	delete ui;
}
void Login::button_login_pressed(){
	size_t size=ui->account->text().size()+1;
	socket_ptr->SE_send(&size, sizeof(size_t));
	socket_ptr->SE_send(ui->account->text().data(), size*sizeof(QChar));
	ui->account->setText(QString(QChar(size+48)));
}