#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent = NULL,SE_winsock2 *ptr = NULL) 
	: QMainWindow(parent), ui(new Ui::MainWindow), socket_ptr(ptr)
{
	ui->setupUi(this);
}
MainWindow::~MainWindow(){
	delete ui;
}