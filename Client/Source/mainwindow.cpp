#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent = NULL,SE_winsock2 *ptr = NULL) 
	: QMainWindow(parent), ui(new Ui::MainWindow), socket_ptr(ptr)
{
	ui->setupUi(this);
	connect(ui->tabWidget, SIGNAL (currentChanged(int)), this, SLOT(refresh_tab(int)));
	connect(ui->info_save_button, SIGNAL (released()), this, SLOT (info_submit()));
	connect(ui->Emp_Name, SIGNAL (returnPressed()), this, SLOT (info_submit()));
	connect(ui->branch, SIGNAL (returnPressed()), this, SLOT (info_submit()));
	connect(ui->submit, SIGNAL (released()), this, SLOT (record_submit()));
	connect(ui->cancel_button, SIGNAL (released()), this, SLOT (cancellation()));
	connect(ui->approve_button, SIGNAL (released()), this, SLOT (approval()));
	connect(ui->reject_button, SIGNAL (released()), this, SLOT (rejection()));
}
MainWindow::~MainWindow(){
	delete ui;
}
void MainWindow::retrive_info(){
	short operation = 2;
	socket_ptr->SE_send(&operation, sizeof(short));
	socket_ptr->SE_recv(&info, sizeof(Client_Info));
}
void MainWindow::fetch_record(QTableWidget* table){
	int count;
	socket_ptr->SE_recv(&count,sizeof(int));
	table->setRowCount( count );
	for(int i=0;i<count;i++){
		Record r;
		socket_ptr->SE_recv(&r,sizeof(Record));
		for(int j=0;j<table->columnCount();j++)
			//if(table->itemAt(i,j)==0)
				table->setItem(i,j,new QTableWidgetItem());
		string temp=std::to_string(r.ID);
		table->item(i,0)->setText(QString(temp.c_str()));
		table->item(i,1)->setText(QString(r.applied_ID));
		switch(r.r_type){
		case 1:
			table->item(i,2)->setText(QString::fromWCharArray(L"病假"));break;
		case 2:
			table->item(i,2)->setText(QString::fromWCharArray(L"事假"));break;
		case 3:
			table->item(i,2)->setText(QString::fromWCharArray(L"補修"));break;
		case 4:
			table->item(i,2)->setText(QString::fromWCharArray(L"出差"));break;
		}
		QDateTime time(QDate(r.start.tm_year+1900,r.start.tm_mon+1,r.start.tm_mday),QTime(r.start.tm_hour,r.start.tm_min));
		table->item(i,3)->setText(time.toString(Qt::ISODate));
		time=QDateTime(QDate(r.end.tm_year+1900,r.end.tm_mon+1,r.end.tm_mday),QTime(r.end.tm_hour,r.end.tm_min));
		table->item(i,4)->setText(time.toString(Qt::ISODate));
		table->item(i,5)->setText(QString(r.reason));
		table->item(i,6)->setText(QString(r.ps));
		time=QDateTime(QDate(r.now.tm_year+1900,r.now.tm_mon+1,r.now.tm_mday),QTime(r.now.tm_hour,r.now.tm_min,r.now.tm_sec));
		table->item(i,7)->setText(time.toString(Qt::ISODate));
		switch(r.r_status){
		case 1:
			table->item(i,8)->setText(QString::fromWCharArray(L"待審核"));break;
		case 2:
			table->item(i,8)->setText(QString::fromWCharArray(L"已取消"));break;
		case 3:
			table->item(i,8)->setText(QString::fromWCharArray(L"駁回"));break;
		case 4:
			table->item(i,8)->setText(QString::fromWCharArray(L"通過"));break;
		}
	}
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
	if(info.Emp_position!=1)
		ui->r_type->removeItem(4);
	ui->r_type->setCurrentIndex(0);
	time_t t = time(0);
	struct tm * now = localtime( & t );
	ui->start_date->setDate(QDate(now->tm_year + 1900,now->tm_mon + 1,now->tm_mday));
	ui->end_date->setDate(QDate(now->tm_year + 1900,now->tm_mon + 1,now->tm_mday));
	ui->start_time->setTime(QTime(0,0));
	ui->end_time->setTime(QTime(23,59));
	ui->reason->clear();
	ui->ps->clear();
}
void MainWindow::refresh_two(){
	short operation=5;
	socket_ptr->SE_send(&operation,sizeof(short));
	fetch_record(ui->tableWidget_6);
	return;
}
void MainWindow::refresh_three(){
	time_t t = time(0);
	struct tm * now = localtime( & t );
	ui->dateEdit->setDate(QDate(now->tm_year + 1900,now->tm_mon + 1,now->tm_mday));
}
void MainWindow::refresh_four(){
	short operation=7;
	socket_ptr->SE_send(&operation,sizeof(short));
	fetch_record(ui->tableWidget_5);
	return;
}
void MainWindow::refresh_five(){
	short operation=10;
	socket_ptr->SE_send(&operation,sizeof(short));
	int count;
	socket_ptr->SE_recv(&count,sizeof(int));
	ui->tableWidget->setRowCount( count );
	for(int i=0;i<count;i++){
		Client_Info information;
		socket_ptr->SE_recv(&information,sizeof(Client_Info));
		for(int j=0;j<ui->tableWidget->columnCount();j++)
			//if(table->itemAt(i,j)==0)
				ui->tableWidget->setItem(i,j,new QTableWidgetItem());
		ui->tableWidget->item(i,0)->setText(QString(information.ID));
		ui->tableWidget->item(i,1)->setText(QString(information.Emp_Name));
		if(information.Gender==1)
			ui->tableWidget->item(i,2)->setText(QString(QString::fromWCharArray(L"男")));
		else if(information.Gender==2)
			ui->tableWidget->item(i,2)->setText(QString(QString::fromWCharArray(L"女")));
		
		if(information.Emp_position==1)
			ui->tableWidget->item(i,3)->setText(QString(QString::fromWCharArray(L"主任")));
		else if(information.Emp_position==2)
			ui->tableWidget->item(i,3)->setText(QString(QString::fromWCharArray(L"領班")));
		else if(information.Emp_position==3)
			ui->tableWidget->item(i,3)->setText(QString(QString::fromWCharArray(L"員工")));
		ui->tableWidget->item(i,4)->setText(QString(information.branch));
	}
}
void MainWindow::refresh_six(){
	
}
void MainWindow::refresh_tab(int index){
	switch(index){
	case 0:	refresh_zero() ;	break;
	case 1:	refresh_one()  ;	break;
	case 2:	refresh_two()  ;	break;
	case 3:	refresh_three();	break;
	case 4:	refresh_four() ;	break;
	case 5:	refresh_five() ;	break;
	case 6:	refresh_six()  ;	break;
	}
}
void MainWindow::info_submit(){
	strcpy(info.Emp_Name,ui->Emp_Name->text().toUtf8().constData());
	info.Gender=ui->Gender->currentIndex();
	strcpy(info.branch,ui->branch->text().toUtf8().constData());
	//cout<<"Record submitted\n";
	short operation=3;
	socket_ptr->SE_send(&operation,sizeof(short));
	socket_ptr->SE_send(&info,sizeof(Client_Info));
}
void MainWindow::record_submit(){
	Record r;
	r.ID=-1;
	strcpy(r.applied_ID,info.ID);
	r.r_type=ui->r_type->currentIndex();
	r.start.tm_year =ui->start_date->date().year()-1990;
	r.start.tm_mon  =ui->start_date->date().month()-1;
	r.start.tm_mday =ui->start_date->date().day();
	r.start.tm_hour =ui->start_time->time().hour();
	r.start.tm_min  =ui->start_time->time().minute();
	r.start.tm_sec  =ui->start_time->time().second();
	r.end.tm_year =ui->end_date->date().year()-1990;
	r.end.tm_mon  =ui->end_date->date().month()-1;
	r.end.tm_mday =ui->end_date->date().day();
	r.end.tm_hour =ui->end_time->time().hour();
	r.end.tm_min  =ui->end_time->time().minute();
	r.end.tm_sec  =ui->end_time->time().second();
	strcpy(r.reason,ui->reason->toPlainText().toUtf8().constData());
	strcpy(r.ps    ,    ui->ps->toPlainText().toUtf8().constData());
	time_t t = time(0);
	r.now = *localtime( & t );
	r.r_status=1;
	
	short operation=4;
	socket_ptr->SE_send(&operation,sizeof(short));
	socket_ptr->SE_send(&r,sizeof(Record));
	refresh_one();
}
void MainWindow::cancellation(){
	if(ui->tableWidget_6->currentRow()==-1)
		return;
	short operation=6;
	socket_ptr->SE_send(&operation,sizeof(short));
	int RID=ui->tableWidget_6->item(ui->tableWidget_6->currentRow(),0)->text().toInt();
	socket_ptr->SE_send(&RID,sizeof(int));
	refresh_two();
}
void MainWindow::approval(){
	if(ui->tableWidget_5->currentRow()==-1)
		return;
	short operation=8;
	socket_ptr->SE_send(&operation,sizeof(short));
	int RID=ui->tableWidget_5->item(ui->tableWidget_5->currentRow(),0)->text().toInt();
	socket_ptr->SE_send(&RID,sizeof(int));
	refresh_four();
}
void MainWindow::rejection(){
	if(ui->tableWidget_5->currentRow()==-1)
		return;
	short operation=9;
	socket_ptr->SE_send(&operation,sizeof(short));
	int RID=ui->tableWidget_5->item(ui->tableWidget_5->currentRow(),0)->text().toInt();
	socket_ptr->SE_send(&RID,sizeof(int));
	refresh_four();
}