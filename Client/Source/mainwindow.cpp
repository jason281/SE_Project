#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent = NULL,SE_winsock2 *ptr = NULL) 
	: QMainWindow(parent), ui(new Ui::MainWindow), socket_ptr(ptr)
{
	ui->setupUi(this);
	connect(ui->info_save_button, SIGNAL (released()), this, SLOT (info_submit()));
	connect(ui->Emp_Name, SIGNAL (returnPressed()), this, SLOT (info_submit()));
	connect(ui->branch, SIGNAL (returnPressed()), this, SLOT (info_submit()));
}
MainWindow::~MainWindow(){
	delete ui;
}
void MainWindow::retrive_info(){
	short operation = 2;
	socket_ptr->SE_send(&operation, sizeof(short));
	socket_ptr->SE_recv(&info, sizeof(Client_Info));
}
void MainWindow::refresh(){
	if(info.Emp_position!=1){
		ui->tabWidget->removeTab(6);
		ui->tabWidget->removeTab(5);
	}
	if(info.Emp_position==3)
		ui->tabWidget->removeTab(4);
	refresh_zero();
	refresh_one();
	refresh_two();
	refresh_three();
	if(ui->tabWidget->count()>4)
		refresh_four();
	if(ui->tabWidget->count()>5)
		refresh_five();
	if(ui->tabWidget->count()>6){
		time_t t = time(0);
		struct tm * now = localtime( & t );
		ui->dateEditWeek->setDate(QDate(now->tm_year + 1900,now->tm_mon + 1,now->tm_mday));
		refresh_six();
	}
}
void MainWindow::refresh_zero(){
	retrive_info();
	ui->ID->setText(QString(info.ID));
	ui->Emp_Name->setText(QString(info.Emp_Name));
	ui->Gender->setCurrentIndex(info.Gender);
	switch(info.Emp_position){
		case 1:	ui->Emp_position->setText(QString::fromWCharArray(L"主任"));	break;
		case 2:	ui->Emp_position->setText(QString::fromWCharArray(L"領班"));	break;
		case 3:	ui->Emp_position->setText(QString::fromWCharArray(L"員工"));	break;
	}
	ui->branch->setText(QString(info.branch));
}
void MainWindow::refresh_one(){
	ui->ID_two->setText(QString(info.ID));
	time_t t = time(0);
	struct tm * now = localtime( & t );
	ui->start_date->setDate(QDate(now->tm_year + 1900,now->tm_mon + 1,now->tm_mday));
	ui->end_date->setDate(QDate(now->tm_year + 1900,now->tm_mon + 1,now->tm_mday));
	ui->start_time->setTime(QTime(0,0));
	ui->end_time->setTime(QTime(23,59));
}
void MainWindow::refresh_two(){
	
}
void MainWindow::refresh_three(){
	time_t t = time(0);
	struct tm * now = localtime( & t );
	ui->dateEdit->setDate(QDate(now->tm_year + 1900,now->tm_mon + 1,now->tm_mday));
}
void MainWindow::refresh_four(){
	
}
void MainWindow::refresh_five(){
	
}
void MainWindow::refresh_six(){
}

void MainWindow::info_submit(){
	strcpy(info.Emp_Name,ui->Emp_Name->text().toUtf8().constData());
	info.Gender=ui->Gender->currentIndex();
	strcpy(info.branch,ui->branch->text().toUtf8().constData());
	
	short operation=3;
	socket_ptr->SE_send(&operation,sizeof(short));
	socket_ptr->SE_send(&info,sizeof(Client_Info));
}