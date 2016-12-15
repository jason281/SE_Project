#include <QMainWindow>

namespace Ui{
	class Login;
}
class Login : public QMainWindow{
	Q_OBJECT
public:
	explicit Login(QWidget *);
	~Login();
private:
	Ui::Login *ui;
};