#include "passwd_modify.h"
#include "ui_passwd_modify.h"
#include <QMessageBox>

passwd_modify::passwd_modify(QWidget * parent=NULL,SE_winsock2* ptr=NULL,Client_Info* i=NULL) : QMainWindow(parent), ui(new Ui::passwd_modify), socket_ptr(ptr), info(i){
	ui->setupUi(this);
	connect(ui->new_passwd2, SIGNAL (returnPressed()), this, SLOT (confirm()));
	connect(ui->buttonBox, SIGNAL (accepted()), this, SLOT (confirm()));
	connect(ui->buttonBox, SIGNAL (rejected()), this, SLOT (hide()));
}
passwd_modify::~passwd_modify(){
	delete ui;
}
void passwd_modify::confirm(){
	if(ui->new_passwd->text()!=ui->new_passwd2->text()){
		QMessageBox::information( this, tr("Error"), tr("Two new password has to be the same!") );
		ui->new_passwd->setStyleSheet("border: 1px solid red");
		ui->new_passwd2->setStyleSheet("border: 1px solid red");
		ui->old_passwd->setStyleSheet(styleSheet());
		return;
	}
	short operation=17;
	socket_ptr->SE_send(&operation,sizeof(short));
	
	///login
	string ID(info->ID);
	size_t len=ID.size()+1;
	socket_ptr->SE_send(&len,sizeof(size_t));
	socket_ptr->SE_send(info->ID,len);
	len=ui->old_passwd->text().size()+1;
	socket_ptr->SE_send(&len,sizeof(size_t));
	char temp[len];
	strcpy(temp,ui->old_passwd->text().toUtf8().constData());
	for(int i=0;i<len;i++)
		temp[i]=temp[i]^(char)len;
	socket_ptr->SE_send(temp,len);
	short status;
	socket_ptr->SE_recv(&status,sizeof(short));
	if(status){
		QMessageBox::information( this, tr("Error"), tr("Old password incorrect!") );
		ui->new_passwd->setStyleSheet(styleSheet());
		ui->new_passwd2->setStyleSheet(styleSheet());
		ui->old_passwd->setStyleSheet("border: 1px solid red");
		return;
	}
	
	len=ui->new_passwd->text().size()+1;
	socket_ptr->SE_send(&len,sizeof(size_t));
	socket_ptr->SE_send(ui->new_passwd->text().toUtf8().constData(),len);
	
	ui->new_passwd->setStyleSheet(styleSheet());
	ui->new_passwd2->setStyleSheet(styleSheet());
	ui->old_passwd->setStyleSheet(styleSheet());
	ui->new_passwd->clear();
	ui->new_passwd2->clear();
	ui->old_passwd->clear();
	hide();
}