#include <QMessageBox>
#include "add.h"
#include "mainwindow.h"
#include "ui_add.h"

Add::Add(QWidget* parent=NULL,SE_winsock2* ptr=NULL,MainWindow* p=NULL) : QMainWindow(parent), ui(new Ui::Add), socket_ptr(ptr), mainwindow(p)
{
	ui->setupUi(this);
	connect(ui->buttonBox, SIGNAL (accepted()), this, SLOT (submit()));
	connect(ui->buttonBox, SIGNAL (rejected()), this, SLOT (hide()));
	connect(ui->Emp_position,SIGNAL(currentIndexChanged(int)),this,SLOT(setDefaultTime(int)));
}
Add::~Add(){
	delete ui;
}
void Add::resizeEvent(QResizeEvent* event){
	QMainWindow::resizeEvent(event);
	ui->verticalWidget->setGeometry((width()-ui->verticalWidget->width())/2,(height()-ui->verticalWidget->height())/2,ui->verticalWidget->width(),ui->verticalWidget->height());
}
void Add::Clear(){
	ui->ID->clear();
	ui->ID->setEnabled(true);
	ui->ID->setStyleSheet(styleSheet());
	ui->Emp_Name->clear();
	ui->Gender->setCurrentIndex(0);
	ui->Emp_position->setCurrentIndex(-1);
	ui->branch->clear();
	ui->Default_time->clear();
	operation=12;
}
void Add::fetch_info(Client_Info i){
	ui->ID->setText(QString(i.ID));
	ui->ID->setEnabled(false);
	ui->ID->setStyleSheet(styleSheet());
	ui->Emp_Name->setText(QString(i.Emp_Name));
	ui->Gender->setCurrentIndex(i.Gender);
	ui->Emp_position->setCurrentIndex(i.Emp_position-1);
	ui->branch->setText(QString(i.branch));
	ui->Default_time->clear();
	if(i.Emp_position==1)
		ui->Default_time->insertItems(0, QStringList() << QApplication::translate("Add", "\345\233\272\345\256\232\346\227\251\347\217\255", 0));
	else{
		ui->Default_time->insertItems(0, QStringList()
         << QApplication::translate("Add", "\346\227\251\347\217\255", 0)
         << QApplication::translate("Add", "\346\231\232\347\217\255", 0));
	}
	if(i.Default_time==2)
		ui->Default_time->setCurrentIndex(1);
	else
		ui->Default_time->setCurrentIndex(0);
	operation=13;
}
void Add::submit(){
	if(!ui->ID->text().size()){
		return;
	}
	if(ui->Emp_position->currentIndex()!=0||ui->Emp_position->currentIndex()!=1||ui->Emp_position->currentIndex()!=2)
		return;
	Client_Info i;
	strcpy(i.ID, ui->ID->text().toUtf8().constData());
	strcpy(i.Emp_Name, ui->Emp_Name->text().toUtf8().constData());
	i.Gender=ui->Gender->currentIndex();
	i.Emp_position=ui->Emp_position->currentIndex()+1;
	strcpy(i.branch, ui->branch->text().toUtf8().constData());
	if(ui->Default_time->currentText()==QApplication::translate("Add", "\346\227\251\347\217\255", 0))
		i.Default_time=1;
	else if(ui->Default_time->currentText()==QApplication::translate("Add", "\346\231\232\347\217\255", 0))
		i.Default_time=2;
	else if(ui->Default_time->currentText()==QApplication::translate("Add", "\345\233\272\345\256\232\346\227\251\347\217\255", 0))
		i.Default_time=3;
	socket_ptr->SE_send(&operation,sizeof(short));
	socket_ptr->SE_send(&i,sizeof(Client_Info));
	short status;
	socket_ptr->SE_recv(&status,sizeof(short));
	mainwindow->refresh_five();
	if(status)
		hide();
	else{
		ui->ID->setStyleSheet("border: 1px solid red");
		QMessageBox::information( this, tr("Error"), tr("ID repeate!") );
	}
}
void Add::setDefaultTime(int index){
	ui->Default_time->clear();
	if(index==0)
		ui->Default_time->insertItems(0, QStringList() << QApplication::translate("Add", "\345\233\272\345\256\232\346\227\251\347\217\255", 0));
	else{
		ui->Default_time->insertItems(0, QStringList()
         << QApplication::translate("Add", "\346\227\251\347\217\255", 0)
         << QApplication::translate("Add", "\346\231\232\347\217\255", 0));
	}
	ui->Default_time->setCurrentIndex(0);
}