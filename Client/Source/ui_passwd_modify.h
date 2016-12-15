/********************************************************************************
** Form generated from reading UI file 'passwd_modifynv6476.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef PASSWD_MODIFYNV6476_H
#define PASSWD_MODIFYNV6476_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_passwd_modify
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *passwd_modify)
    {
        if (passwd_modify->objectName().isEmpty())
            passwd_modify->setObjectName(QStringLiteral("passwd_modify"));
        passwd_modify->resize(400, 300);
        gridLayoutWidget = new QWidget(passwd_modify);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(50, 50, 271, 151));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);

        buttonBox = new QDialogButtonBox(passwd_modify);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(150, 230, 156, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(passwd_modify);

        QMetaObject::connectSlotsByName(passwd_modify);
    } // setupUi

    void retranslateUi(QWidget *passwd_modify)
    {
        passwd_modify->setWindowTitle(QApplication::translate("passwd_modify", "Form", 0));
        label->setText(QApplication::translate("passwd_modify", "\350\210\212\345\257\206\347\242\274:", 0));
        label_2->setText(QApplication::translate("passwd_modify", "\346\226\260\345\257\206\347\242\274:", 0));
        label_3->setText(QApplication::translate("passwd_modify", "\345\206\215\346\254\241\350\274\270\345\205\245\346\226\260\345\257\206\347\242\274", 0));
    } // retranslateUi

};

namespace Ui {
    class passwd_modify: public Ui_passwd_modify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PASSWD_MODIFYNV6476_H
