#ifndef __SETTING_H__
#define __SETTING_H__

#include <QMainWindow>
#include "SE_Definition.h"

namespace Ui{
	class Setting;
}
class Setting : public QMainWindow{
	Q_OBJECT
public:
	explicit Setting(QWidget *, string&, int&);
	~Setting();
	void resizeEvent(QResizeEvent*);
private slots:
	void confirm();
private:
	Ui::Setting *ui;
	string& server_ip;
	int& server_port;
};

#endif