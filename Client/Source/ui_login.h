/********************************************************************************
** Form generated from reading UI file 'loginnZ7524.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef LOGINNZ7524_H
#define LOGINNZ7524_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *account;
    QLineEdit *password;
    QCheckBox *remember;
    QHBoxLayout *horizontalLayout;
    QPushButton *login_button;
    QPushButton *setting_button;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(671, 451);
        verticalWidget = new QWidget(Login);
        verticalWidget->setObjectName(QStringLiteral("verticalWidget"));
        verticalWidget->setGeometry(QRect(240, 160, 160, 121));
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        account = new QLineEdit(verticalWidget);
        account->setObjectName(QStringLiteral("account"));
        account->setAutoFillBackground(false);
        account->setClearButtonEnabled(true);

        verticalLayout->addWidget(account);

        password = new QLineEdit(verticalWidget);
        password->setObjectName(QStringLiteral("password"));
        password->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(password);

        remember = new QCheckBox(verticalWidget);
        remember->setObjectName(QStringLiteral("remember"));

        verticalLayout->addWidget(remember);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        login_button = new QPushButton(verticalWidget);
        login_button->setObjectName(QStringLiteral("login_button"));

        horizontalLayout->addWidget(login_button);

        setting_button = new QPushButton(verticalWidget);
        setting_button->setObjectName(QStringLiteral("setting_button"));

        horizontalLayout->addWidget(setting_button);


        verticalLayout->addLayout(horizontalLayout);


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

#endif // LOGINNZ7524_H
