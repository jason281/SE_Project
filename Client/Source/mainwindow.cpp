#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
#include <QResizeEvent>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent = NULL,SE_winsock2 *ptr = NULL,Login* l=NULL) 
	: QMainWindow(parent), ui(new Ui::MainWindow), socket_ptr(ptr), add_window(parent, ptr, this), passwd_modify_window(parent, ptr, &info), login_window(l)
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
	connect(ui->remove_button, SIGNAL (released()), this, SLOT (remove_employee()));
	connect(ui->add_button, SIGNAL (released()), this, SLOT (add_employee()));
	connect(ui->modify_button, SIGNAL (released()), this, SLOT (modify_employee()));
	connect(ui->dateEditWeek,SIGNAL(dateChanged(const QDate &)),this,SLOT(refresh_six(const QDate &)));
	connect(ui->r_type,SIGNAL(currentIndexChanged(int)),this,SLOT(set_requirement(int)));
	connect(ui->passwd_modify_button, SIGNAL (released()), this, SLOT (passwd_mod()));
	connect(ui->actionLogout, SIGNAL(triggered()),this, SLOT(logout()));
	connect(ui->record_query_button, SIGNAL (released()), this, SLOT (record_query()));
	connect(ui->filter,SIGNAL(currentIndexChanged(int)),this,SLOT(record_filter(int)));
}
MainWindow::~MainWindow(){
	delete ui;
}
void MainWindow::resizeEvent(QResizeEvent* event){
	//cout<<"Resize Event "<<width()<<' '<<height()<<endl;
	QMainWindow::resizeEvent(event);
	ui->tabWidget->setGeometry(0,0,ui->centralwidget->width(),ui->centralwidget->height());
	ui->gridWidget_2->setGeometry((ui->tabWidget->width()-ui->gridWidget_2->width())/2,(ui->tabWidget->height()-ui->gridWidget_2->height())/2,ui->gridWidget_2->width(),ui->gridWidget_2->height());
	ui->verticalWidget_6->setGeometry((ui->tabWidget->width()-ui->verticalWidget_6->width())/2,(ui->tabWidget->height()-ui->verticalWidget_6->height())/2,ui->verticalWidget_6->width(),ui->verticalWidget_6->height());
	ui->verticalWidget->setGeometry(0,0,ui->tabWidget->width(),ui->tabWidget->height()-24);
	ui->verticalWidget_2->setGeometry(0,0,ui->tabWidget->width(),ui->tabWidget->height()-24);
	ui->tableWidget_2->setGeometry(0,0,ui->verticalWidget_2->width()-24,ui->verticalWidget_2->height()-70);
	ui->tableWidget_3->setGeometry(0,0,ui->verticalWidget_2->width()-24,ui->verticalWidget_2->height()-70);
	ui->tableWidget_4->setGeometry(0,0,ui->verticalWidget_2->width()-24,ui->verticalWidget_2->height()-70);
	ui->verticalWidget_3->setGeometry(0,0,ui->tabWidget->width(),ui->tabWidget->height()-24);
	ui->verticalWidget_4->setGeometry(0,0,ui->tabWidget->width(),ui->tabWidget->height()-24);
	ui->verticalWidget_5->setGeometry(0,0,ui->tabWidget->width(),ui->tabWidget->height()-24);
	ui->tableWidget_7->horizontalHeader()->setDefaultSectionSize((ui->verticalWidget_4->width()-57)/7);
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
	ui->filter->setCurrentIndex(0);
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
void MainWindow::fetch_info(QTableWidget* table,Client_Info i){
	int row=table->rowCount();
	table->insertRow(row);
	table->setItem(row,0,new QTableWidgetItem(QString(i.ID)));
	table->setItem(row,1,new QTableWidgetItem(QString(i.Emp_Name)));
	switch(i.Emp_position){
	case 1:	table->setItem(row,2,new QTableWidgetItem(QString::fromWCharArray(L"主任")));	break;
	case 2:	table->setItem(row,2,new QTableWidgetItem(QString::fromWCharArray(L"領班")));	break;
	case 3:	table->setItem(row,2,new QTableWidgetItem(QString::fromWCharArray(L"員工")));	break;
	}
	table->setItem(row,3,new QTableWidgetItem(QString(i.branch)));
}
void MainWindow::refresh(){
	if(info.Emp_position==3){
		ui->tabWidget->setTabEnabled(6,false);
		ui->tabWidget->setTabEnabled(5,false);
		ui->tabWidget->setTabEnabled(4,false);
	}
	else if(info.Emp_position==2){
		ui->tabWidget->setTabEnabled(6,true);
		ui->tabWidget->setTabEnabled(5,false);
		ui->tabWidget->setTabEnabled(4,true);
	}
	else if(info.Emp_position==1){
		ui->tabWidget->setTabEnabled(6,true);
		ui->tabWidget->setTabEnabled(5,true);
		ui->tabWidget->setTabEnabled(4,true);
	}
	refresh_zero();
	refresh_one();
	refresh_two();
	refresh_three();
	if(info.Emp_position!=3)
		refresh_four();
	if(info.Emp_position==1)
		refresh_five();
	if(info.Emp_position!=3){
		time_t t = time(0);
		struct tm * now = localtime( & t );
		ui->dateEditWeek->setDate(QDate(now->tm_year + 1900,now->tm_mon + 1,now->tm_mday));
		refresh_six(ui->dateEditWeek->date());
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
	ui->start_date->setMinimumDate(QDate::currentDate());
	ui->end_date->setMinimumDate(QDate::currentDate());
	ui->end_date->setStyleSheet(styleSheet());
	ui->r_type->setStyleSheet(styleSheet());
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
	ui->start_date->setEnabled(false);
	ui->end_date  ->setEnabled(false);
	ui->start_time->setEnabled(false);
	ui->end_time  ->setEnabled(false);
	ui->reason->clear();
	ui->ps->clear();
	ui->reason->setEnabled(false);
	ui->ps->setEnabled(false);
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
	short operation=14;
	socket_ptr->SE_send(&operation,sizeof(short));
	//socket_ptr->SE_send(&now,sizeof(tm));
	size_t size;
	socket_ptr->SE_recv(&size,sizeof(size_t));
	vector<string> ID(size);
	vector<short> stat(size);
	for(size_t i=0;i<size;i++){
		short len;
		char buff[256];
		short temp;
		socket_ptr->SE_recv(&len,sizeof(short));
		socket_ptr->SE_recv(buff,len);
		socket_ptr->SE_recv(&temp,sizeof(short));
		ID.at(i)=string(buff);
		stat.at(i)=temp;
	}
	ui->tableWidget_2->setRowCount(0);
	ui->tableWidget_3->setRowCount(0);
	ui->tableWidget_4->setRowCount(0);
	for(size_t i=0;i<size;i++){
		operation=15;
		socket_ptr->SE_send(&operation,sizeof(short));
		short len=ID.at(i).size()+1;
		socket_ptr->SE_send(&len,sizeof(short));
		socket_ptr->SE_send(ID.at(i).c_str(),len);
		Client_Info information;
		socket_ptr->SE_recv(&information,sizeof(Client_Info));
		switch(stat.at(i)){
		case 1:	fetch_info(ui->tableWidget_2,information);	break;
		case 2:	fetch_info(ui->tableWidget_3,information);	break;
		case 3:	fetch_info(ui->tableWidget_4,information);	ui->tableWidget_4->setItem(ui->tableWidget_4->rowCount()-1,4,new QTableWidgetItem(QString::fromWCharArray(L"病假")));	break;
		case 4:	fetch_info(ui->tableWidget_4,information);	ui->tableWidget_4->setItem(ui->tableWidget_4->rowCount()-1,4,new QTableWidgetItem(QString::fromWCharArray(L"事假")));	break;
		case 5:	fetch_info(ui->tableWidget_4,information);	ui->tableWidget_4->setItem(ui->tableWidget_4->rowCount()-1,4,new QTableWidgetItem(QString::fromWCharArray(L"補修")));	break;
		case 6:	fetch_info(ui->tableWidget_4,information);	ui->tableWidget_4->setItem(ui->tableWidget_4->rowCount()-1,4,new QTableWidgetItem(QString::fromWCharArray(L"出差")));	break;
		}
	}
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
			ui->tableWidget->item(i,2)->setText(QString::fromWCharArray(L"男"));
		else if(information.Gender==2)
			ui->tableWidget->item(i,2)->setText(QString::fromWCharArray(L"女"));
		
		if(information.Emp_position==1)
			ui->tableWidget->item(i,3)->setText(QString::fromWCharArray(L"主任"));
		else if(information.Emp_position==2)
			ui->tableWidget->item(i,3)->setText(QString::fromWCharArray(L"領班"));
		else if(information.Emp_position==3)
			ui->tableWidget->item(i,3)->setText(QString::fromWCharArray(L"員工"));
		ui->tableWidget->item(i,4)->setText(QString(information.branch));
		if(information.Default_time==1)
			ui->tableWidget->item(i,5)->setText(QString::fromWCharArray(L"早班"));
		else if(information.Default_time==2)
			ui->tableWidget->item(i,5)->setText(QString::fromWCharArray(L"晚班"));
		else if(information.Default_time==3)
			ui->tableWidget->item(i,5)->setText(QString::fromWCharArray(L"固定早班"));
	}
}
void MainWindow::refresh_six(const QDate & qd){
	QDate monday;
	monday=qd.addDays((-1)*(qd.dayOfWeek()-1));
	vector<string> ID;
	size_t size;
	for(int i=0;i<7;i++){
		QDate today=monday.addDays(i);
		ui->tableWidget_7->setHorizontalHeaderItem(i,new QTableWidgetItem);
		ui->tableWidget_7->horizontalHeaderItem(i)->setText(QDate::shortDayName(i+1)+"("+today.toString(Qt::ISODate)+")");
		struct tm date;
		date.tm_year=today.year()-1900;
		date.tm_mon=today.month()-1;
		date.tm_mday=today.day();
		short operation=16;
		socket_ptr->SE_send(&operation,sizeof(short));
		socket_ptr->SE_send(&date,sizeof(tm));
		socket_ptr->SE_recv(&size,sizeof(size_t));
		ui->tableWidget_7->setRowCount(size);
		ID.resize(size);
		vector<short> stat(size);
		for(size_t j=0;j<size;j++){
			short len;
			char buff[256];
			short temp;
			socket_ptr->SE_recv(&len,sizeof(short));
			socket_ptr->SE_recv(buff,len);
			socket_ptr->SE_recv(&temp,sizeof(short));
			ID.at(j)=string(buff);
			stat.at(j)=temp;
		}
		for(int j=0;j<size;j++){
			QTableWidgetItem* temp;
			ui->tableWidget_7->setItem(j,i,temp=new QTableWidgetItem);
			switch(stat.at(j)){
			case 1:	temp->setText(QString::fromWCharArray(L"早班"));	break;
			case 2:	temp->setText(QString::fromWCharArray(L"晚班"));	break;
			case 3:	temp->setText(QString::fromWCharArray(L"病假"));	temp->setForeground(QBrush(QColor(255,0,0)));	break;
			case 4:	temp->setText(QString::fromWCharArray(L"事假"));	temp->setForeground(QBrush(QColor(255,0,0)));	break;
			case 5:	temp->setText(QString::fromWCharArray(L"補修"));	temp->setForeground(QBrush(QColor(255,0,0)));	break;
			case 6:	temp->setText(QString::fromWCharArray(L"出差"));	temp->setForeground(QBrush(QColor(255,0,0)));	break;
			}
			temp->setTextAlignment(Qt::AlignCenter);
		}
	}
	for(int i=0;i<size;i++){
		ui->tableWidget_7->setVerticalHeaderItem(i,new QTableWidgetItem);
		ui->tableWidget_7->verticalHeaderItem(i)->setText(QString(ID[i].c_str()));
	}
}
void MainWindow::refresh_tab(int index){
	switch(index){
	case 0:	refresh_zero() ;	break;
	case 1:	break;
	case 2:	refresh_two()  ;	break;
	case 3:	refresh_three();	break;
	case 4:	refresh_four() ;	break;
	case 5:	refresh_five() ;	break;
	case 6:	refresh_six(ui->dateEditWeek->date());	break;
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
	if(ui->start_date->date()>ui->end_date->date()||(ui->start_date->date()==ui->end_date->date()&&ui->start_time->time()>ui->end_time->time())){
		ui->end_date->setStyleSheet("border: 1px solid red");
		ui->reason->setStyleSheet(styleSheet());
		QMessageBox::information( this, tr("Error"), QString::fromWCharArray(L"結束時間不得超過開始時間") );
		return;
	}
	if(ui->r_type->currentIndex()==0){
		ui->r_type->setStyleSheet("border: 1px solid red");
		ui->end_date->setStyleSheet(styleSheet());
		QMessageBox::information( this, tr("Error"), QString::fromWCharArray(L"請選擇請假種類") );
		return;
	}
	if((ui->r_type->currentIndex()==2 || ui->r_type->currentIndex()==4) && ui->reason->toPlainText().isEmpty()){
		ui->reason->setStyleSheet("border: 1px solid red");
		ui->end_date->setStyleSheet(styleSheet());
		QMessageBox::information( this, tr("Error"), QString::fromWCharArray(L"事假與出差必須填寫請假事由") );
		return;
	}
	Record r;
	r.ID=-1;
	strcpy(r.applied_ID,ui->ID_two->text().toUtf8().constData());
	r.r_type=ui->r_type->currentIndex();
	r.start.tm_year =ui->start_date->date().year()-1900;
	r.start.tm_mon  =ui->start_date->date().month()-1;
	r.start.tm_mday =ui->start_date->date().day();
	r.start.tm_hour =ui->start_time->time().hour();
	r.start.tm_min  =ui->start_time->time().minute();
	r.start.tm_sec  =ui->start_time->time().second();
	r.end.tm_year =ui->end_date->date().year()-1900;
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
void MainWindow::remove_employee(){
	if(ui->tableWidget->currentRow()==-1)
		return;
	short operation=11;
	socket_ptr->SE_send(&operation,sizeof(short));
	string id(ui->tableWidget->item(ui->tableWidget->currentRow(),0)->text().toUtf8().constData());
	size_t len=id.size()+1;
	socket_ptr->SE_send(&len,sizeof(size_t));
	socket_ptr->SE_send(id.c_str(),len);
	refresh_five();
}
void MainWindow::add_employee(){
	add_window.Clear();
	add_window.show();
}
void MainWindow::modify_employee(){
	Client_Info i;
	int row=ui->tableWidget->currentRow();
	strcpy(i.ID,ui->tableWidget->item(row,0)->text().toUtf8().constData());
	strcpy(i.Emp_Name,ui->tableWidget->item(row,1)->text().toUtf8().constData());
	if(ui->tableWidget->item(row,2)->text()==QString::fromWCharArray(L"男"))
		i.Gender=1;
	else if(ui->tableWidget->item(row,2)->text()==QString::fromWCharArray(L"女"))
		i.Gender=2;
	else
		i.Gender=0;
	if(ui->tableWidget->item(row,3)->text()==QString::fromWCharArray(L"主任"))
		i.Emp_position=1;
	else if(ui->tableWidget->item(row,3)->text()==QString::fromWCharArray(L"領班"))
		i.Emp_position=2;
	else if(ui->tableWidget->item(row,3)->text()==QString::fromWCharArray(L"員工"))
		i.Emp_position=3;
	strcpy(i.branch,ui->tableWidget->item(row,4)->text().toUtf8().constData());
	if(ui->tableWidget->item(row,5)->text()==QString::fromWCharArray(L"早班"))
		i.Default_time=1;
	else if(ui->tableWidget->item(row,5)->text()==QString::fromWCharArray(L"晚班"))
		i.Default_time=2;
	else if(ui->tableWidget->item(row,5)->text()==QString::fromWCharArray(L"固定早班"))
		i.Default_time=3;
	add_window.fetch_info(i);
	add_window.show();
}
void MainWindow::set_requirement(int index){
	ui->end_date->setStyleSheet(styleSheet());
	ui->r_type->setStyleSheet(styleSheet());
	if(index==0){
		ui->start_date->setEnabled(false);
		ui->end_date  ->setEnabled(false);
		ui->start_time->setEnabled(false);
		ui->end_time  ->setEnabled(false);
		ui->reason->setEnabled(false);
		ui->ps->setEnabled(false);
	}
	else if(index==1){			//病假
		ui->ID_two->setText(QString(info.ID));
		ui->ID_two->setEnabled(false);
		time_t t = time(0);
		struct tm * now = localtime( & t );
		ui->start_date->setDate(QDate(now->tm_year + 1900,now->tm_mon + 1,now->tm_mday));
		ui->end_date->setDate(QDate(now->tm_year + 1900,now->tm_mon + 1,now->tm_mday));
		ui->start_time->setTime(QTime(0,0));
		ui->end_time->setTime(QTime(23,59));
		ui->start_date->setEnabled(false);
		ui->end_date  ->setEnabled(false);
		ui->start_time->setEnabled(false);
		ui->end_time  ->setEnabled(false);
		ui->reason->setStyleSheet(styleSheet());
		ui->reason->setEnabled(true);
		ui->ps->setEnabled(true);
	}
	else if(index==2){		//事假
		ui->ID_two->setText(QString(info.ID));
		ui->ID_two->setEnabled(false);
		ui->start_date->setEnabled(true);
		ui->end_date  ->setEnabled(true);
		ui->start_time->setEnabled(true);
		ui->end_time  ->setEnabled(true);
		ui->reason->setStyleSheet(styleSheet());
		ui->reason->setEnabled(true);
		ui->ps->setEnabled(true);
	}
	else if(index==3){		//補修
		ui->ID_two->setText(QString(info.ID));
		ui->ID_two->setEnabled(false);
		ui->start_date->setEnabled(true);
		ui->end_date  ->setEnabled(true);
		ui->start_time->setEnabled(true);
		ui->end_time  ->setEnabled(true);
		ui->reason->setStyleSheet(styleSheet());
		ui->reason->setEnabled(true);
		ui->ps->setEnabled(true);
	}
	else if(index==4){		//出差
		ui->ID_two->setEnabled(true);
		ui->start_date->setEnabled(true);
		ui->end_date  ->setEnabled(true);
		ui->start_time->setEnabled(true);
		ui->end_time  ->setEnabled(true);
		ui->reason->setStyleSheet(styleSheet());
		ui->reason->setEnabled(true);
		ui->ps->setEnabled(true);
	}
}
void MainWindow::passwd_mod(){
	passwd_modify_window.show();
}
void MainWindow::logout(){
	//short operation=0;
	//socket_ptr->SE_send(&operation,sizeof(short));
	login_window->show();
	hide();
}
void MainWindow::record_query(){
	ui->tabWidget->setCurrentIndex(2);
	short operation=18;
	socket_ptr->SE_send(&operation,sizeof(short));
	size_t len=ui->tableWidget->item(ui->tableWidget->currentRow(),0)->text().size()+1;
	socket_ptr->SE_send(&len,sizeof(size_t));
	socket_ptr->SE_send(ui->tableWidget->item(ui->tableWidget->currentRow(),0)->text().toUtf8().constData(),len);
	fetch_record(ui->tableWidget_6);
	return;
}
void MainWindow::record_filter(int index){
	QList<QTableWidgetItem *> pending,cancel,approve,reject;
	pending=ui->tableWidget_6->findItems(QString::fromWCharArray(L"待審核"),Qt::MatchExactly);
	cancel =ui->tableWidget_6->findItems(QString::fromWCharArray(L"已取消"),Qt::MatchExactly);
	approve=ui->tableWidget_6->findItems(QString::fromWCharArray(L"通過")  ,Qt::MatchExactly);
	reject =ui->tableWidget_6->findItems(QString::fromWCharArray(L"駁回")  ,Qt::MatchExactly);
	if(index==0||index==1)
		for(int i=0;i<pending.size();i++)
			ui->tableWidget_6->setRowHidden(pending[i]->row(),false);
	else
		for(int i=0;i<pending.size();i++)
			ui->tableWidget_6->setRowHidden(pending[i]->row(),true);
	if(index==0||index==2)
		for(int i=0;i<cancel.size();i++)
			ui->tableWidget_6->setRowHidden(cancel[i]->row(),false);
	else
		for(int i=0;i<cancel.size();i++)
			ui->tableWidget_6->setRowHidden(cancel[i]->row(),true);
	if(index==0||index==3)
		for(int i=0;i<approve.size();i++)
			ui->tableWidget_6->setRowHidden(approve[i]->row(),false);
	else
		for(int i=0;i<approve.size();i++)
			ui->tableWidget_6->setRowHidden(approve[i]->row(),true);
	if(index==0||index==4)
		for(int i=0;i<reject.size();i++)
			ui->tableWidget_6->setRowHidden(reject[i]->row(),false);
	else
		for(int i=0;i<reject.size();i++)
			ui->tableWidget_6->setRowHidden(reject[i]->row(),true);
}