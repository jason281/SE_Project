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
private:
	Ui::MainWindow *ui;
	SE_winsock2* socket_ptr;
};