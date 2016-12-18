#include <QMainWindow>
#include "SE_winsock2.h"

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
private:
	Ui::Login *ui;
	SE_winsock2* socket_ptr;
};