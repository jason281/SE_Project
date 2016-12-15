#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent = 0) : QMainWindow(parent), ui(new Ui::Login){
	ui->setupUi(this);
}
Login::~Login(){
	delete ui;
}