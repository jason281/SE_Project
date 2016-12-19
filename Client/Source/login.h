#ifndef __LOGIN_H__
#define __LOGIN_H__

#include <QMainWindow>
#include "SE_winsock2.h"
#include "setting.h"

namespace Ui{
	class Login;
}
class Login : public QMainWindow{
	Q_OBJECT
public:
	explicit Login(QWidget *,SE_winsock2*);
	~Login();
private slots:
	void button_login_pressed();
	void setting_show();
private:
	string server_ip;
	int server_port;
	Ui::Login *ui;
	Setting setting_window;
	SE_winsock2* socket_ptr;
};

#endif