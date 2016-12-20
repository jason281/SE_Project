#ifndef __MAINWINDOW_H__
#define __MAINWINDOW_H__

#include <QMainWindow>
#include "SE_winsock2.h"

namespace Ui{
	class MainWindow;
}
class MainWindow : public QMainWindow{
	Q_OBJECT
public:
	explicit MainWindow(QWidget *,SE_winsock2*);
	~MainWindow();
	void retrive_info();
	void refresh();
	void refresh_zero();
	void refresh_one();
	void refresh_two();
	void refresh_three();
	void refresh_four();
	void refresh_five();
	void refresh_six();
private slots:
	void info_submit();
	void record_submit();
private:
	Client_Info info;
	Ui::MainWindow *ui;
	SE_winsock2* socket_ptr;
};

#endif