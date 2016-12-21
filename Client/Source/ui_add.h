/********************************************************************************
** Form generated from reading UI file 'addNl7524.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef ADDNL7524_H
#define ADDNL7524_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Add
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *Emp_Name;
    QComboBox *Gender;
    QLineEdit *ID;
    QLabel *label;
    QComboBox *Emp_position;
    QLineEdit *branch;
    QComboBox *Default_time;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *Add)
    {
        if (Add->objectName().isEmpty())
            Add->setObjectName(QStringLiteral("Add"));
        Add->resize(400, 343);
        gridLayoutWidget = new QWidget(Add);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(120, 20, 181, 241));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        Emp_Name = new QLineEdit(gridLayoutWidget);
        Emp_Name->setObjectName(QStringLiteral("Emp_Name"));

        gridLayout->addWidget(Emp_Name, 1, 1, 1, 1);

        Gender = new QComboBox(gridLayoutWidget);
        Gender->setObjectName(QStringLiteral("Gender"));
        Gender->setMaximumSize(QSize(60, 16777215));

        gridLayout->addWidget(Gender, 2, 1, 1, 1);

        ID = new QLineEdit(gridLayoutWidget);
        ID->setObjectName(QStringLiteral("ID"));

        gridLayout->addWidget(ID, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 5, 0, 1, 1);

        Emp_position = new QComboBox(gridLayoutWidget);
        Emp_position->setObjectName(QStringLiteral("Emp_position"));
        Emp_position->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(Emp_position, 3, 1, 1, 1);

        branch = new QLineEdit(gridLayoutWidget);
        branch->setObjectName(QStringLiteral("branch"));

        gridLayout->addWidget(branch, 4, 1, 1, 1);

        Default_time = new QComboBox(gridLayoutWidget);
        Default_time->setObjectName(QStringLiteral("Default_time"));
        Default_time->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(Default_time, 5, 1, 1, 1);

        buttonBox = new QDialogButtonBox(Add);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(130, 280, 156, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->raise();
        gridLayoutWidget->raise();

        retranslateUi(Add);

        QMetaObject::connectSlotsByName(Add);
    } // setupUi

    void retranslateUi(QWidget *Add)
    {
        Add->setWindowTitle(QApplication::translate("Add", "Form", 0));
        label_3->setText(QApplication::translate("Add", "\345\247\223\345\220\215:", 0));
        label_7->setText(QApplication::translate("Add", "\351\203\250\351\226\200:", 0));
        label_4->setText(QApplication::translate("Add", "ID:", 0));
        label_6->setText(QApplication::translate("Add", "\350\201\267\344\275\215:", 0));
        label_5->setText(QApplication::translate("Add", "\346\200\247\345\210\245:", 0));
        Gender->clear();
        Gender->insertItems(0, QStringList()
         << QApplication::translate("Add", "\350\253\213\351\201\270\346\223\207", 0)
         << QApplication::translate("Add", "\347\224\267", 0)
         << QApplication::translate("Add", "\345\245\263", 0)
        );
        label->setText(QApplication::translate("Add", "\351\240\220\350\250\255\347\217\255\345\210\245:", 0));
        Emp_position->clear();
        Emp_position->insertItems(0, QStringList()
         << QApplication::translate("Add", "\344\270\273\344\273\273", 0)
         << QApplication::translate("Add", "\351\240\230\347\217\255", 0)
         << QApplication::translate("Add", "\345\223\241\345\267\245", 0)
        );
        Default_time->clear();
        Default_time->insertItems(0, QStringList()
         << QApplication::translate("Add", "\346\227\245\347\217\255", 0)
         << QApplication::translate("Add", "\345\244\234\347\217\255", 0)
         << QApplication::translate("Add", "\345\205\250\345\244\251", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class Add: public Ui_Add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ADDNL7524_H
