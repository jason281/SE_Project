#ifndef __PASSWD_MODIFY_H__
#define __PASSWD_MODIFY_H__

#include <QMainWindow>
#include "SE_Definition.h"
#include "SE_winsock2.h"

namespace Ui{
	class passwd_modify;
}
class passwd_modify : public QMainWindow{
	Q_OBJECT
public:
	explicit passwd_modify(QWidget *,SE_winsock2*,Client_Info*);
	~passwd_modify();
private slots:
	void confirm();
private:
	Ui::passwd_modify* ui;
	SE_winsock2* socket_ptr;
	Client_Info* info;
};

#endif