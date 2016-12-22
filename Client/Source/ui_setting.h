/********************************************************************************
** Form generated from reading UI file 'settingrs7524.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SETTINGRS7524_H
#define SETTINGRS7524_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Setting
{
public:
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *server_ip;
    QLabel *label_2;
    QSpinBox *server_port;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *Setting)
    {
        if (Setting->objectName().isEmpty())
            Setting->setObjectName(QStringLiteral("Setting"));
        Setting->resize(400, 300);
        verticalWidget = new QWidget(Setting);
        verticalWidget->setObjectName(QStringLiteral("verticalWidget"));
        verticalWidget->setGeometry(QRect(100, 90, 160, 101));
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(verticalWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        server_ip = new QLineEdit(verticalWidget);
        server_ip->setObjectName(QStringLiteral("server_ip"));

        gridLayout->addWidget(server_ip, 0, 1, 1, 1);

        label_2 = new QLabel(verticalWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        server_port = new QSpinBox(verticalWidget);
        server_port->setObjectName(QStringLiteral("server_port"));

        gridLayout->addWidget(server_port, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(verticalWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Setting);

        QMetaObject::connectSlotsByName(Setting);
    } // setupUi

    void retranslateUi(QWidget *Setting)
    {
        Setting->setWindowTitle(QApplication::translate("Setting", "Form", 0));
        label->setText(QApplication::translate("Setting", "\344\274\272\346\234\215\345\231\250IP:", 0));
        label_2->setText(QApplication::translate("Setting", "\351\200\232\350\250\212\345\237\240:", 0));
    } // retranslateUi

};

namespace Ui {
    class Setting: public Ui_Setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SETTINGRS7524_H
