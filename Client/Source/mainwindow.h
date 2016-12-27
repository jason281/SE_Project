#ifndef __MAINWINDOW_H__
#define __MAINWINDOW_H__

#include <QMainWindow>
#include <QTableWidget>
#include "SE_winsock2.h"
#include "add.h"
#include "passwd_modify.h"

class Login;
namespace Ui{
	class MainWindow;
}
class MainWindow : public QMainWindow{
	Q_OBJECT
	//friend void Add::submit();
public:
	explicit MainWindow(QWidget *,SE_winsock2*,Login*);
	~MainWindow();
	void retrive_info();
	void fetch_record(QTableWidget*);
	void fetch_info(QTableWidget*,Client_Info);
	void resizeEvent(QResizeEvent*);
public slots:
	void refresh();
	void refresh_tab(int);
	void refresh_zero();
	void refresh_one();
	void refresh_two();
	void refresh_three();
	void refresh_four();
	void refresh_five();
	void refresh_six(const QDate &);
private slots:
	void info_submit();
	void record_submit();
	void cancellation();
	void approval();
	void rejection();
	void remove_employee();
	void add_employee();
	void modify_employee();
	void set_requirement(int);
	void passwd_mod();
	void logout();
	void record_query();
	void record_filter(int);
private:
	Login* login_window;
	Client_Info info;
	Ui::MainWindow *ui;
	SE_winsock2* socket_ptr;
	Add add_window;
	passwd_modify passwd_modify_window;
	
};

#endif