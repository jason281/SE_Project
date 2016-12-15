/********************************************************************************
** Form generated from reading UI file 'addcu6476.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef ADDCU6476_H
#define ADDCU6476_H

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
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_6;
    QComboBox *comboBox;
    QLabel *label_5;
    QLabel *label_7;
    QLineEdit *lineEdit_5;
    QComboBox *comboBox_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *Add)
    {
        if (Add->objectName().isEmpty())
            Add->setObjectName(QStringLiteral("Add"));
        Add->resize(400, 300);
        gridLayoutWidget = new QWidget(Add);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(100, 10, 181, 221));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        lineEdit_4 = new QLineEdit(gridLayoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(lineEdit_4, 1, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setEnabled(true);
        lineEdit_3->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(lineEdit_3, 0, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        comboBox = new QComboBox(gridLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(comboBox, 2, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        lineEdit_5 = new QLineEdit(gridLayoutWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        gridLayout->addWidget(lineEdit_5, 4, 1, 1, 1);

        comboBox_2 = new QComboBox(gridLayoutWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(comboBox_2, 3, 1, 1, 1);

        buttonBox = new QDialogButtonBox(Add);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(130, 250, 156, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Add);

        QMetaObject::connectSlotsByName(Add);
    } // setupUi

    void retranslateUi(QWidget *Add)
    {
        Add->setWindowTitle(QApplication::translate("Add", "Form", 0));
        label_4->setText(QApplication::translate("Add", "ID:", 0));
        label_3->setText(QApplication::translate("Add", "\345\247\223\345\220\215:", 0));
        lineEdit_3->setText(QString());
        label_6->setText(QApplication::translate("Add", "\350\201\267\344\275\215:", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Add", "\347\224\267", 0)
         << QApplication::translate("Add", "\345\245\263", 0)
        );
        label_5->setText(QApplication::translate("Add", "\346\200\247\345\210\245:", 0));
        label_7->setText(QApplication::translate("Add", "\351\203\250\351\226\200:", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("Add", "\344\270\273\344\273\273", 0)
         << QApplication::translate("Add", "\351\240\230\347\217\255", 0)
         << QApplication::translate("Add", "\345\223\241\345\267\245", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class Add: public Ui_Add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ADDCU6476_H
