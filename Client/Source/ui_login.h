/********************************************************************************
** Form generated from reading UI file 'loginHp5424.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef LOGINHP5424_H
#define LOGINHP5424_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QSplitter *splitter;
    QLineEdit *account;
    QLineEdit *password;
    QCheckBox *remember;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *login_button;
    QPushButton *setting_button;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(671, 451);
        splitter = new QSplitter(Login);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(250, 160, 133, 101));
        splitter->setFrameShape(QFrame::NoFrame);
        splitter->setFrameShadow(QFrame::Plain);
        splitter->setLineWidth(1);
        splitter->setOrientation(Qt::Vertical);
        splitter->setHandleWidth(5);
        account = new QLineEdit(splitter);
        account->setObjectName(QStringLiteral("account"));
        account->setAutoFillBackground(false);
        account->setClearButtonEnabled(true);
        splitter->addWidget(account);
        password = new QLineEdit(splitter);
        password->setObjectName(QStringLiteral("password"));
        password->setEchoMode(QLineEdit::Password);
        splitter->addWidget(password);
        remember = new QCheckBox(splitter);
        remember->setObjectName(QStringLiteral("remember"));
        splitter->addWidget(remember);
        horizontalLayoutWidget = new QWidget(splitter);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        login_button = new QPushButton(horizontalLayoutWidget);
        login_button->setObjectName(QStringLiteral("login_button"));

        horizontalLayout->addWidget(login_button);

        setting_button = new QPushButton(horizontalLayoutWidget);
        setting_button->setObjectName(QStringLiteral("setting_button"));

        horizontalLayout->addWidget(setting_button);

        splitter->addWidget(horizontalLayoutWidget);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", 0));
        account->setText(QString());
        account->setPlaceholderText(QApplication::translate("Login", "account", 0));
        password->setText(QString());
        password->setPlaceholderText(QApplication::translate("Login", "password", 0));
        remember->setText(QApplication::translate("Login", "Remember me", 0));
        login_button->setText(QApplication::translate("Login", "Login", 0));
        setting_button->setText(QApplication::translate("Login", "Setting", 0));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // LOGINHP5424_H
