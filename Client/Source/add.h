#ifndef __ADD_H__
#define __ADD_H__

#include <QMainWindow>
#include "SE_winsock2.h"

class MainWindow;
namespace Ui{
	class Add;
}
class Add : public QMainWindow{
	Q_OBJECT
public:
	explicit Add(QWidget *,SE_winsock2*,MainWindow*);
	~Add();
public slots:
	void Clear();
	void fetch_info(Client_Info);
	void submit();
	void setDefaultTime(int);
private:
	short operation;
	Ui::Add *ui;
	SE_winsock2* socket_ptr;
	MainWindow* mainwindow;
};

#endif