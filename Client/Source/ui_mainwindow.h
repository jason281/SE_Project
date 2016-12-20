/********************************************************************************
** Form generated from reading UI file 'mainwindowfw6688.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOWFW6688_H
#define MAINWINDOWFW6688_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_9;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *Emp_Name;
    QLineEdit *Emp_position;
    QLabel *label_3;
    QLineEdit *ID;
    QLabel *label_6;
    QComboBox *Gender;
    QLabel *label_5;
    QLabel *label_7;
    QLineEdit *branch;
    QPushButton *info_save_button;
    QPushButton *passwd_modify_button;
    QWidget *tab;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLineEdit *ID_two;
    QLabel *label;
    QLabel *label_8;
    QLabel *label_10;
    QComboBox *r_type;
    QLabel *label_9;
    QLabel *label_11;
    QTextEdit *ps;
    QTextEdit *reason;
    QHBoxLayout *horizontalLayout_2;
    QDateEdit *start_date;
    QTimeEdit *start_time;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QDateEdit *end_date;
    QTimeEdit *end_time;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *submit;
    QWidget *tab_8;
    QTableWidget *tableWidget_6;
    QPushButton *pushButton_6;
    QWidget *tab_5;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QTableWidget *tableWidget_2;
    QWidget *tab_6;
    QTableWidget *tableWidget_3;
    QWidget *tab_7;
    QTableWidget *tableWidget_4;
    QDateEdit *dateEdit;
    QWidget *tab_2;
    QTableWidget *tableWidget_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *tab_3;
    QTableWidget *tableWidget;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QPushButton *pushButton_5;
    QWidget *tab_10;
    QTableWidget *tableWidget_7;
    QDateEdit *dateEditWeek;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 588);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 0, 771, 541));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        gridLayoutWidget = new QWidget(tab_9);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(300, 120, 181, 221));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        Emp_Name = new QLineEdit(gridLayoutWidget);
        Emp_Name->setObjectName(QStringLiteral("Emp_Name"));
        Emp_Name->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(Emp_Name, 1, 1, 1, 1);

        Emp_position = new QLineEdit(gridLayoutWidget);
        Emp_position->setObjectName(QStringLiteral("Emp_position"));
        Emp_position->setEnabled(false);

        gridLayout->addWidget(Emp_position, 3, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        ID = new QLineEdit(gridLayoutWidget);
        ID->setObjectName(QStringLiteral("ID"));
        ID->setEnabled(false);
        ID->setMaximumSize(QSize(50, 16777215));

        gridLayout->addWidget(ID, 0, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        Gender = new QComboBox(gridLayoutWidget);
        Gender->setObjectName(QStringLiteral("Gender"));
        Gender->setMaximumSize(QSize(60, 16777215));

        gridLayout->addWidget(Gender, 2, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        branch = new QLineEdit(gridLayoutWidget);
        branch->setObjectName(QStringLiteral("branch"));

        gridLayout->addWidget(branch, 4, 1, 1, 1);

        info_save_button = new QPushButton(tab_9);
        info_save_button->setObjectName(QStringLiteral("info_save_button"));
        info_save_button->setGeometry(QRect(300, 360, 75, 23));
        passwd_modify_button = new QPushButton(tab_9);
        passwd_modify_button->setObjectName(QStringLiteral("passwd_modify_button"));
        passwd_modify_button->setGeometry(QRect(400, 360, 75, 23));
        tabWidget->addTab(tab_9, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayoutWidget_2 = new QWidget(tab);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(130, 20, 481, 411));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        ID_two = new QLineEdit(gridLayoutWidget_2);
        ID_two->setObjectName(QStringLiteral("ID_two"));
        ID_two->setEnabled(false);
        ID_two->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(ID_two, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 3, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 4, 0, 1, 1);

        r_type = new QComboBox(gridLayoutWidget_2);
        r_type->setObjectName(QStringLiteral("r_type"));
        r_type->setMaximumSize(QSize(60, 16777215));

        gridLayout_2->addWidget(r_type, 1, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 1, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 5, 0, 1, 1);

        ps = new QTextEdit(gridLayoutWidget_2);
        ps->setObjectName(QStringLiteral("ps"));

        gridLayout_2->addWidget(ps, 5, 1, 1, 1);

        reason = new QTextEdit(gridLayoutWidget_2);
        reason->setObjectName(QStringLiteral("reason"));

        gridLayout_2->addWidget(reason, 4, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        start_date = new QDateEdit(gridLayoutWidget_2);
        start_date->setObjectName(QStringLiteral("start_date"));
        start_date->setMaximumSize(QSize(16777215, 16777215));
        start_date->setCalendarPopup(true);

        horizontalLayout_2->addWidget(start_date);

        start_time = new QTimeEdit(gridLayoutWidget_2);
        start_time->setObjectName(QStringLiteral("start_time"));
        start_time->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_2->addWidget(start_time);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        end_date = new QDateEdit(gridLayoutWidget_2);
        end_date->setObjectName(QStringLiteral("end_date"));
        end_date->setMaximumSize(QSize(16777215, 16777215));
        end_date->setCalendarPopup(true);

        horizontalLayout_4->addWidget(end_date);

        end_time = new QTimeEdit(gridLayoutWidget_2);
        end_time->setObjectName(QStringLiteral("end_time"));
        end_time->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_4->addWidget(end_time);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_4, 3, 1, 1, 1);

        submit = new QPushButton(tab);
        submit->setObjectName(QStringLiteral("submit"));
        submit->setGeometry(QRect(540, 470, 75, 23));
        tabWidget->addTab(tab, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        tableWidget_6 = new QTableWidget(tab_8);
        if (tableWidget_6->columnCount() < 8)
            tableWidget_6->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidget_6->setObjectName(QStringLiteral("tableWidget_6"));
        tableWidget_6->setGeometry(QRect(30, 10, 711, 461));
        tableWidget_6->setRowCount(0);
        pushButton_6 = new QPushButton(tab_8);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(660, 480, 75, 23));
        tabWidget->addTab(tab_8, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget_2 = new QTabWidget(tab_5);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(20, 20, 721, 471));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tableWidget_2 = new QTableWidget(tab_4);
        if (tableWidget_2->columnCount() < 4)
            tableWidget_2->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem11);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(0, 0, 711, 441));
        tableWidget_2->setRowCount(0);
        tableWidget_2->setColumnCount(4);
        tabWidget_2->addTab(tab_4, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tableWidget_3 = new QTableWidget(tab_6);
        if (tableWidget_3->columnCount() < 4)
            tableWidget_3->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(3, __qtablewidgetitem15);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(0, 0, 711, 441));
        tableWidget_3->setRowCount(0);
        tableWidget_3->setColumnCount(4);
        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        tableWidget_4 = new QTableWidget(tab_7);
        if (tableWidget_4->columnCount() < 3)
            tableWidget_4->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(2, __qtablewidgetitem18);
        tableWidget_4->setObjectName(QStringLiteral("tableWidget_4"));
        tableWidget_4->setGeometry(QRect(0, 0, 711, 441));
        tabWidget_2->addTab(tab_7, QString());
        dateEdit = new QDateEdit(tab_5);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(669, 10, 71, 22));
        dateEdit->setReadOnly(true);
        dateEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dateEdit->setDate(QDate(2016, 10, 25));
        tabWidget->addTab(tab_5, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableWidget_5 = new QTableWidget(tab_2);
        if (tableWidget_5->columnCount() < 6)
            tableWidget_5->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(2, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(3, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(4, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(5, __qtablewidgetitem24);
        tableWidget_5->setObjectName(QStringLiteral("tableWidget_5"));
        tableWidget_5->setGeometry(QRect(20, 10, 711, 461));
        tableWidget_5->setRowCount(0);
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(570, 490, 75, 23));
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(650, 490, 75, 23));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tableWidget = new QTableWidget(tab_3);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem29);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(30, 20, 711, 461));
        tableWidget->setRowCount(0);
        tableWidget->setColumnCount(5);
        toolButton = new QToolButton(tab_3);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(30, 490, 51, 21));
        toolButton_2 = new QToolButton(tab_3);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setGeometry(QRect(90, 490, 51, 21));
        toolButton_3 = new QToolButton(tab_3);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setGeometry(QRect(150, 490, 51, 21));
        pushButton_5 = new QPushButton(tab_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(660, 490, 75, 23));
        tabWidget->addTab(tab_3, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        tableWidget_7 = new QTableWidget(tab_10);
        if (tableWidget_7->columnCount() < 7)
            tableWidget_7->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(0, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(1, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(2, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(3, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(4, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(5, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(6, __qtablewidgetitem36);
        tableWidget_7->setObjectName(QStringLiteral("tableWidget_7"));
        tableWidget_7->setGeometry(QRect(30, 40, 641, 461));
        dateEditWeek = new QDateEdit(tab_10);
        dateEditWeek->setObjectName(QStringLiteral("dateEditWeek"));
        dateEditWeek->setGeometry(QRect(540, 10, 110, 22));
        dateEditWeek->setCalendarPopup(true);
        tabWidget->addTab(tab_10, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_4->setText(QApplication::translate("MainWindow", "ID:", 0));
        Emp_position->setText(QApplication::translate("MainWindow", "\344\270\273\344\273\273", 0));
        label_3->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215:", 0));
        ID->setText(QApplication::translate("MainWindow", "A001", 0));
        label_6->setText(QApplication::translate("MainWindow", "\350\201\267\344\275\215:", 0));
        Gender->clear();
        Gender->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\350\253\213\351\201\270\346\223\207", 0)
         << QApplication::translate("MainWindow", "\347\224\267", 0)
         << QApplication::translate("MainWindow", "\345\245\263", 0)
        );
        label_5->setText(QApplication::translate("MainWindow", "\346\200\247\345\210\245:", 0));
        label_7->setText(QApplication::translate("MainWindow", "\351\203\250\351\226\200:", 0));
        info_save_button->setText(QApplication::translate("MainWindow", "\345\204\262\345\255\230", 0));
        passwd_modify_button->setText(QApplication::translate("MainWindow", "\344\277\256\346\224\271\345\257\206\347\242\274", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("MainWindow", "\345\200\213\344\272\272\350\263\207\346\226\231", 0));
        label_2->setText(QApplication::translate("MainWindow", "\351\226\213\345\247\213\346\231\202\351\226\223", 0));
        label->setText(QApplication::translate("MainWindow", "ID:", 0));
        label_8->setText(QApplication::translate("MainWindow", "\347\265\220\346\235\237\346\231\202\351\226\223", 0));
        label_10->setText(QApplication::translate("MainWindow", "\350\253\213\345\201\207\344\272\213\347\224\261", 0));
        r_type->clear();
        r_type->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\350\253\213\351\201\270\346\223\207", 0)
         << QApplication::translate("MainWindow", "\347\227\205\345\201\207", 0)
         << QApplication::translate("MainWindow", "\344\272\213\345\201\207", 0)
         << QApplication::translate("MainWindow", "\350\243\234\344\277\256", 0)
         << QApplication::translate("MainWindow", "\345\207\272\345\267\256", 0)
        );
        label_9->setText(QApplication::translate("MainWindow", "\350\253\213\345\201\207\351\241\236\345\210\245", 0));
        label_11->setText(QApplication::translate("MainWindow", "\345\202\231\350\250\273", 0));
        submit->setText(QApplication::translate("MainWindow", "\351\200\201\345\207\272", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\350\253\213\345\201\207", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_6->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "ID", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_6->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\350\253\213\345\201\207\351\241\236\345\210\245", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_6->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\351\226\213\345\247\213\346\231\202\351\226\223", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_6->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\347\265\220\346\235\237\346\231\202\351\226\223", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_6->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\350\253\213\345\201\207\344\272\213\347\224\261", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_6->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\345\202\231\350\250\273", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_6->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\347\224\263\350\253\213\346\231\202\351\226\223", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_6->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "\347\213\200\346\205\213", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "\345\217\226\346\266\210\347\224\263\350\253\213", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("MainWindow", "\350\253\213\345\201\207\347\264\200\351\214\204", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "ID", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "\350\201\267\344\275\215", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "\351\203\250\351\226\200", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "\346\227\251\347\217\255", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "ID", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "\350\201\267\344\275\215", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "\351\203\250\351\226\200", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("MainWindow", "\346\231\232\347\217\255", 0));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_4->horizontalHeaderItem(0);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "ID", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_4->horizontalHeaderItem(1);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_4->horizontalHeaderItem(2);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "\350\253\213\345\201\207\351\241\236\345\210\245", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("MainWindow", "\350\253\213\345\201\207\344\272\272\345\223\241", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "\344\273\212\346\227\245\344\270\212\347\217\255\345\223\241\345\267\245", 0));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_5->horizontalHeaderItem(0);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "ID", 0));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_5->horizontalHeaderItem(1);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "\350\253\213\345\201\207\351\241\236\345\210\245", 0));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_5->horizontalHeaderItem(2);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "\351\226\213\345\247\213\346\231\202\351\226\223", 0));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_5->horizontalHeaderItem(3);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "\347\265\220\346\235\237\346\231\202\351\226\223", 0));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_5->horizontalHeaderItem(4);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "\350\253\213\345\201\207\344\272\213\347\224\261", 0));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_5->horizontalHeaderItem(5);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "\345\202\231\350\250\273", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "\351\200\232\351\201\216", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "\351\247\201\345\233\236", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\345\257\251\346\240\270", 0));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "ID", 0));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "\346\200\247\345\210\245", 0));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "\350\201\267\344\275\215", 0));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "\351\203\250\351\226\200", 0));
        toolButton->setText(QApplication::translate("MainWindow", "Add", 0));
        toolButton_2->setText(QApplication::translate("MainWindow", "Remove", 0));
        toolButton_3->setText(QApplication::translate("MainWindow", "Modify", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "\350\253\213\345\201\207\347\264\200\351\214\204", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\345\223\241\345\267\245\344\270\200\350\246\275\350\241\250", 0));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget_7->horizontalHeaderItem(0);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow", "\351\200\261\346\227\245", 0));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget_7->horizontalHeaderItem(1);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow", "\351\200\261\344\270\200", 0));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget_7->horizontalHeaderItem(2);
        ___qtablewidgetitem32->setText(QApplication::translate("MainWindow", "\351\200\261\344\272\214", 0));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget_7->horizontalHeaderItem(3);
        ___qtablewidgetitem33->setText(QApplication::translate("MainWindow", "\351\200\261\344\270\211", 0));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget_7->horizontalHeaderItem(4);
        ___qtablewidgetitem34->setText(QApplication::translate("MainWindow", "\351\200\261\345\233\233", 0));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget_7->horizontalHeaderItem(5);
        ___qtablewidgetitem35->setText(QApplication::translate("MainWindow", "\351\200\261\344\272\224", 0));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget_7->horizontalHeaderItem(6);
        ___qtablewidgetitem36->setText(QApplication::translate("MainWindow", "\351\200\261\345\205\255", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_10), QApplication::translate("MainWindow", "\347\225\266\345\221\250\344\270\212\347\217\255\345\223\241\345\267\245", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINWINDOWFW6688_H
