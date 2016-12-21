#ifndef __MAINWINDOW_H__
#define __MAINWINDOW_H__

#include <QMainWindow>
#include <QTableWidget>
#include "SE_winsock2.h"
#include "add.h"

namespace Ui{
	class MainWindow;
}
class MainWindow : public QMainWindow{
	Q_OBJECT
	//friend void Add::submit();
public:
	explicit MainWindow(QWidget *,SE_winsock2*);
	~MainWindow();
	void retrive_info();
	void fetch_record(QTableWidget*);
	void refresh();
	void refresh_zero();
	void refresh_one();
	void refresh_two();
	void refresh_three();
	void refresh_four();
	void refresh_five();
	void refresh_six();
private slots:
	void refresh_tab(int);
	void info_submit();
	void record_submit();
	void cancellation();
	void approval();
	void rejection();
	void remove_employee();
	void add_employee();
	void modify_employee();
private:
	Client_Info info;
	Ui::MainWindow *ui;
	SE_winsock2* socket_ptr;
	Add add_window;
};

#endif