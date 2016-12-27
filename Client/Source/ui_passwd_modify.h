/********************************************************************************
** Form generated from reading UI file 'passwd_modifyNl5616.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef PASSWD_MODIFYNL5616_H
#define PASSWD_MODIFYNL5616_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_passwd_modify
{
public:
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *old_passwd;
    QLineEdit *new_passwd;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *new_passwd2;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *passwd_modify)
    {
        if (passwd_modify->objectName().isEmpty())
            passwd_modify->setObjectName(QStringLiteral("passwd_modify"));
        passwd_modify->resize(400, 300);
        verticalWidget = new QWidget(passwd_modify);
        verticalWidget->setObjectName(QStringLiteral("verticalWidget"));
        verticalWidget->setGeometry(QRect(80, 60, 231, 161));
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(17);
        label = new QLabel(verticalWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        old_passwd = new QLineEdit(verticalWidget);
        old_passwd->setObjectName(QStringLiteral("old_passwd"));
        old_passwd->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(old_passwd, 0, 1, 1, 1);

        new_passwd = new QLineEdit(verticalWidget);
        new_passwd->setObjectName(QStringLiteral("new_passwd"));
        new_passwd->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(new_passwd, 1, 1, 1, 1);

        label_2 = new QLabel(verticalWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(verticalWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        new_passwd2 = new QLineEdit(verticalWidget);
        new_passwd2->setObjectName(QStringLiteral("new_passwd2"));
        new_passwd2->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(new_passwd2, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(verticalWidget);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


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

#endif // PASSWD_MODIFYNL5616_H
