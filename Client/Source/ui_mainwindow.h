/********************************************************************************
** Form generated from reading UI file 'mainwindowHp8160.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOWHP8160_H
#define MAINWINDOWHP8160_H

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
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLogout;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_9;
    QWidget *verticalWidget_6;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QComboBox *Gender;
    QLineEdit *Emp_position;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *Emp_Name;
    QLineEdit *ID;
    QLabel *label_7;
    QLineEdit *branch;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *info_save_button;
    QPushButton *passwd_modify_button;
    QWidget *tab;
    QWidget *gridWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QTextEdit *reason;
    QLabel *label_10;
    QLabel *label_2;
    QLabel *label;
    QComboBox *r_type;
    QLabel *label_9;
    QLineEdit *ID_two;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_4;
    QDateEdit *end_date;
    QTimeEdit *end_time;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QDateEdit *start_date;
    QTimeEdit *start_time;
    QSpacerItem *horizontalSpacer;
    QTextEdit *ps;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *submit;
    QWidget *tab_8;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget_6;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *filter;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *cancel_button;
    QWidget *tab_5;
    QWidget *verticalWidget_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_5;
    QDateEdit *dateEdit;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QTableWidget *tableWidget_2;
    QWidget *tab_6;
    QTableWidget *tableWidget_3;
    QWidget *tab_7;
    QTableWidget *tableWidget_4;
    QWidget *tab_2;
    QWidget *verticalWidget_3;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *tableWidget_5;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *approve_button;
    QPushButton *reject_button;
    QWidget *tab_3;
    QWidget *verticalWidget_5;
    QVBoxLayout *verticalLayout_6;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_10;
    QToolButton *add_button;
    QToolButton *remove_button;
    QToolButton *modify_button;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *record_query_button;
    QWidget *tab_10;
    QWidget *verticalWidget_4;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_7;
    QDateEdit *dateEditWeek;
    QTableWidget *tableWidget_7;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 588);
        actionLogout = new QAction(MainWindow);
        actionLogout->setObjectName(QStringLiteral("actionLogout"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 0, 800, 547));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        verticalWidget_6 = new QWidget(tab_9);
        verticalWidget_6->setObjectName(QStringLiteral("verticalWidget_6"));
        verticalWidget_6->setGeometry(QRect(240, 130, 171, 221));
        verticalLayout_2 = new QVBoxLayout(verticalWidget_6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(6);
        gridLayout_3->setVerticalSpacing(13);
        label_3 = new QLabel(verticalWidget_6);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        Gender = new QComboBox(verticalWidget_6);
        Gender->setObjectName(QStringLiteral("Gender"));
        Gender->setMaximumSize(QSize(60, 16777215));

        gridLayout_3->addWidget(Gender, 1, 1, 1, 1);

        Emp_position = new QLineEdit(verticalWidget_6);
        Emp_position->setObjectName(QStringLiteral("Emp_position"));
        Emp_position->setEnabled(false);
        Emp_position->setMaximumSize(QSize(50, 16777215));

        gridLayout_3->addWidget(Emp_position, 3, 1, 1, 1);

        label_6 = new QLabel(verticalWidget_6);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 3, 0, 1, 1);

        label_5 = new QLabel(verticalWidget_6);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        label_4 = new QLabel(verticalWidget_6);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_3->addWidget(label_4, 0, 0, 1, 1);

        Emp_Name = new QLineEdit(verticalWidget_6);
        Emp_Name->setObjectName(QStringLiteral("Emp_Name"));
        Emp_Name->setMaximumSize(QSize(100, 16777215));

        gridLayout_3->addWidget(Emp_Name, 2, 1, 1, 1);

        ID = new QLineEdit(verticalWidget_6);
        ID->setObjectName(QStringLiteral("ID"));
        ID->setEnabled(false);
        ID->setMaximumSize(QSize(50, 16777215));

        gridLayout_3->addWidget(ID, 0, 1, 1, 1);

        label_7 = new QLabel(verticalWidget_6);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 4, 0, 1, 1);

        branch = new QLineEdit(verticalWidget_6);
        branch->setObjectName(QStringLiteral("branch"));

        gridLayout_3->addWidget(branch, 4, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        info_save_button = new QPushButton(verticalWidget_6);
        info_save_button->setObjectName(QStringLiteral("info_save_button"));

        horizontalLayout_5->addWidget(info_save_button);

        passwd_modify_button = new QPushButton(verticalWidget_6);
        passwd_modify_button->setObjectName(QStringLiteral("passwd_modify_button"));

        horizontalLayout_5->addWidget(passwd_modify_button);


        verticalLayout_2->addLayout(horizontalLayout_5);

        tabWidget->addTab(tab_9, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridWidget_2 = new QWidget(tab);
        gridWidget_2->setObjectName(QStringLiteral("gridWidget_2"));
        gridWidget_2->setGeometry(QRect(130, 20, 481, 411));
        gridLayout_2 = new QGridLayout(gridWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_8 = new QLabel(gridWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 3, 0, 1, 1);

        reason = new QTextEdit(gridWidget_2);
        reason->setObjectName(QStringLiteral("reason"));
        reason->setLineWrapMode(QTextEdit::WidgetWidth);

        gridLayout_2->addWidget(reason, 4, 1, 1, 1);

        label_10 = new QLabel(gridWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_2->addWidget(label_10, 4, 0, 1, 1);

        label_2 = new QLabel(gridWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        label = new QLabel(gridWidget_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        r_type = new QComboBox(gridWidget_2);
        r_type->setObjectName(QStringLiteral("r_type"));
        r_type->setMaximumSize(QSize(60, 16777215));

        gridLayout_2->addWidget(r_type, 1, 1, 1, 1);

        label_9 = new QLabel(gridWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setTextFormat(Qt::PlainText);

        gridLayout_2->addWidget(label_9, 1, 0, 1, 1);

        ID_two = new QLineEdit(gridWidget_2);
        ID_two->setObjectName(QStringLiteral("ID_two"));
        ID_two->setEnabled(false);
        ID_two->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(ID_two, 0, 1, 1, 1);

        label_11 = new QLabel(gridWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 5, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        end_date = new QDateEdit(gridWidget_2);
        end_date->setObjectName(QStringLiteral("end_date"));
        end_date->setMaximumSize(QSize(16777215, 16777215));
        end_date->setCalendarPopup(true);

        horizontalLayout_4->addWidget(end_date);

        end_time = new QTimeEdit(gridWidget_2);
        end_time->setObjectName(QStringLiteral("end_time"));
        end_time->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_4->addWidget(end_time);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_4, 3, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        start_date = new QDateEdit(gridWidget_2);
        start_date->setObjectName(QStringLiteral("start_date"));
        start_date->setMaximumSize(QSize(16777215, 16777215));
        start_date->setCalendarPopup(true);

        horizontalLayout_2->addWidget(start_date);

        start_time = new QTimeEdit(gridWidget_2);
        start_time->setObjectName(QStringLiteral("start_time"));
        start_time->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_2->addWidget(start_time);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout_2, 2, 1, 1, 1);

        ps = new QTextEdit(gridWidget_2);
        ps->setObjectName(QStringLiteral("ps"));

        gridLayout_2->addWidget(ps, 5, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        submit = new QPushButton(gridWidget_2);
        submit->setObjectName(QStringLiteral("submit"));

        horizontalLayout_3->addWidget(submit);


        gridLayout_2->addLayout(horizontalLayout_3, 6, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        verticalWidget = new QWidget(tab_8);
        verticalWidget->setObjectName(QStringLiteral("verticalWidget"));
        verticalWidget->setGeometry(QRect(0, 0, 761, 523));
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableWidget_6 = new QTableWidget(verticalWidget);
        if (tableWidget_6->columnCount() < 9)
            tableWidget_6->setColumnCount(9);
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
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_6->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        tableWidget_6->setObjectName(QStringLiteral("tableWidget_6"));
        tableWidget_6->setRowCount(0);

        verticalLayout->addWidget(tableWidget_6);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        filter = new QComboBox(verticalWidget);
        filter->setObjectName(QStringLiteral("filter"));
        filter->setDuplicatesEnabled(true);

        horizontalLayout_6->addWidget(filter);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        cancel_button = new QPushButton(verticalWidget);
        cancel_button->setObjectName(QStringLiteral("cancel_button"));

        horizontalLayout_6->addWidget(cancel_button);


        verticalLayout->addLayout(horizontalLayout_6);

        tabWidget->addTab(tab_8, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalWidget_2 = new QWidget(tab_5);
        verticalWidget_2->setObjectName(QStringLiteral("verticalWidget_2"));
        verticalWidget_2->setGeometry(QRect(0, 10, 731, 481));
        verticalLayout_3 = new QVBoxLayout(verticalWidget_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        dateEdit = new QDateEdit(verticalWidget_2);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setReadOnly(true);
        dateEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dateEdit->setDate(QDate(2016, 10, 25));

        horizontalLayout_7->addWidget(dateEdit);


        verticalLayout_3->addLayout(horizontalLayout_7);

        tabWidget_2 = new QTabWidget(verticalWidget_2);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tableWidget_2 = new QTableWidget(tab_4);
        if (tableWidget_2->columnCount() < 4)
            tableWidget_2->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem12);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(0, 0, 707, 411));
        tableWidget_2->setRowCount(0);
        tableWidget_2->setColumnCount(4);
        tabWidget_2->addTab(tab_4, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tableWidget_3 = new QTableWidget(tab_6);
        if (tableWidget_3->columnCount() < 4)
            tableWidget_3->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(2, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(3, __qtablewidgetitem16);
        tableWidget_3->setObjectName(QStringLiteral("tableWidget_3"));
        tableWidget_3->setGeometry(QRect(0, 0, 711, 441));
        tableWidget_3->setRowCount(0);
        tableWidget_3->setColumnCount(4);
        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        tableWidget_4 = new QTableWidget(tab_7);
        if (tableWidget_4->columnCount() < 5)
            tableWidget_4->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(1, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(2, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(3, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(4, __qtablewidgetitem21);
        tableWidget_4->setObjectName(QStringLiteral("tableWidget_4"));
        tableWidget_4->setGeometry(QRect(0, 0, 721, 421));
        tabWidget_2->addTab(tab_7, QString());

        verticalLayout_3->addWidget(tabWidget_2);

        tabWidget->addTab(tab_5, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalWidget_3 = new QWidget(tab_2);
        verticalWidget_3->setObjectName(QStringLiteral("verticalWidget_3"));
        verticalWidget_3->setGeometry(QRect(10, 20, 751, 481));
        verticalLayout_4 = new QVBoxLayout(verticalWidget_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        tableWidget_5 = new QTableWidget(verticalWidget_3);
        if (tableWidget_5->columnCount() < 9)
            tableWidget_5->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(0, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(1, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(2, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(3, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(4, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(5, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(6, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(7, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget_5->setHorizontalHeaderItem(8, __qtablewidgetitem30);
        tableWidget_5->setObjectName(QStringLiteral("tableWidget_5"));
        tableWidget_5->setRowCount(0);

        verticalLayout_4->addWidget(tableWidget_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        approve_button = new QPushButton(verticalWidget_3);
        approve_button->setObjectName(QStringLiteral("approve_button"));

        horizontalLayout_8->addWidget(approve_button);

        reject_button = new QPushButton(verticalWidget_3);
        reject_button->setObjectName(QStringLiteral("reject_button"));

        horizontalLayout_8->addWidget(reject_button);


        verticalLayout_4->addLayout(horizontalLayout_8);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalWidget_5 = new QWidget(tab_3);
        verticalWidget_5->setObjectName(QStringLiteral("verticalWidget_5"));
        verticalWidget_5->setGeometry(QRect(20, 30, 701, 451));
        verticalLayout_6 = new QVBoxLayout(verticalWidget_5);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        tableWidget = new QTableWidget(verticalWidget_5);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem36);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setRowCount(0);
        tableWidget->setColumnCount(6);

        verticalLayout_6->addWidget(tableWidget);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        add_button = new QToolButton(verticalWidget_5);
        add_button->setObjectName(QStringLiteral("add_button"));

        horizontalLayout_10->addWidget(add_button);

        remove_button = new QToolButton(verticalWidget_5);
        remove_button->setObjectName(QStringLiteral("remove_button"));

        horizontalLayout_10->addWidget(remove_button);

        modify_button = new QToolButton(verticalWidget_5);
        modify_button->setObjectName(QStringLiteral("modify_button"));

        horizontalLayout_10->addWidget(modify_button);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        record_query_button = new QPushButton(verticalWidget_5);
        record_query_button->setObjectName(QStringLiteral("record_query_button"));

        horizontalLayout_10->addWidget(record_query_button);


        verticalLayout_6->addLayout(horizontalLayout_10);

        tabWidget->addTab(tab_3, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        verticalWidget_4 = new QWidget(tab_10);
        verticalWidget_4->setObjectName(QStringLiteral("verticalWidget_4"));
        verticalWidget_4->setGeometry(QRect(10, 10, 741, 491));
        verticalLayout_5 = new QVBoxLayout(verticalWidget_4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_7);

        dateEditWeek = new QDateEdit(verticalWidget_4);
        dateEditWeek->setObjectName(QStringLiteral("dateEditWeek"));
        dateEditWeek->setCalendarPopup(true);

        horizontalLayout_9->addWidget(dateEditWeek);


        verticalLayout_5->addLayout(horizontalLayout_9);

        tableWidget_7 = new QTableWidget(verticalWidget_4);
        if (tableWidget_7->columnCount() < 7)
            tableWidget_7->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(0, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(1, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(2, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(3, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(4, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(5, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget_7->setHorizontalHeaderItem(6, __qtablewidgetitem43);
        tableWidget_7->setObjectName(QStringLiteral("tableWidget_7"));
        tableWidget_7->horizontalHeader()->setDefaultSectionSize(103);

        verticalLayout_5->addWidget(tableWidget_7);

        tabWidget->addTab(tab_10, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionLogout);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionLogout->setText(QApplication::translate("MainWindow", "Logout", 0));
        actionLogout->setShortcut(QApplication::translate("MainWindow", "Ctrl+L", 0));
        label_3->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215:", 0));
        Gender->clear();
        Gender->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\350\253\213\351\201\270\346\223\207", 0)
         << QApplication::translate("MainWindow", "\347\224\267", 0)
         << QApplication::translate("MainWindow", "\345\245\263", 0)
        );
        Emp_position->setText(QApplication::translate("MainWindow", "\344\270\273\344\273\273", 0));
        label_6->setText(QApplication::translate("MainWindow", "\350\201\267\344\275\215:", 0));
        label_5->setText(QApplication::translate("MainWindow", "\346\200\247\345\210\245:", 0));
        label_4->setText(QApplication::translate("MainWindow", "ID:", 0));
        ID->setText(QApplication::translate("MainWindow", "A001", 0));
        label_7->setText(QApplication::translate("MainWindow", "\351\203\250\351\226\200:", 0));
        info_save_button->setText(QApplication::translate("MainWindow", "\345\204\262\345\255\230", 0));
        passwd_modify_button->setText(QApplication::translate("MainWindow", "\344\277\256\346\224\271\345\257\206\347\242\274", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("MainWindow", "\345\200\213\344\272\272\350\263\207\346\226\231", 0));
        label_8->setText(QApplication::translate("MainWindow", "\347\265\220\346\235\237\346\231\202\351\226\223", 0));
        label_10->setText(QApplication::translate("MainWindow", "\350\253\213\345\201\207\344\272\213\347\224\261", 0));
        label_2->setText(QApplication::translate("MainWindow", "\351\226\213\345\247\213\346\231\202\351\226\223", 0));
        label->setText(QApplication::translate("MainWindow", "ID:", 0));
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
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "RID", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_6->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "ID", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_6->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\350\253\213\345\201\207\351\241\236\345\210\245", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_6->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\351\226\213\345\247\213\346\231\202\351\226\223", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_6->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\347\265\220\346\235\237\346\231\202\351\226\223", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_6->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\350\253\213\345\201\207\344\272\213\347\224\261", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_6->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\345\202\231\350\250\273", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_6->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "\347\224\263\350\253\213\346\231\202\351\226\223", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_6->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "\347\213\200\346\205\213", 0));
        filter->clear();
        filter->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\346\211\200\346\234\211", 0)
         << QApplication::translate("MainWindow", "\345\276\205\345\257\251\346\240\270", 0)
         << QApplication::translate("MainWindow", "\345\267\262\345\217\226\346\266\210", 0)
         << QApplication::translate("MainWindow", "\351\200\232\351\201\216", 0)
         << QApplication::translate("MainWindow", "\351\247\201\345\233\236", 0)
        );
        cancel_button->setText(QApplication::translate("MainWindow", "\345\217\226\346\266\210\347\224\263\350\253\213", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_8), QApplication::translate("MainWindow", "\350\253\213\345\201\207\347\264\200\351\214\204", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "ID", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "\350\201\267\344\275\215", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "\351\203\250\351\226\200", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "\346\227\251\347\217\255", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "ID", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_3->horizontalHeaderItem(2);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "\350\201\267\344\275\215", 0));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_3->horizontalHeaderItem(3);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "\351\203\250\351\226\200", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("MainWindow", "\346\231\232\347\217\255", 0));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_4->horizontalHeaderItem(0);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "ID", 0));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_4->horizontalHeaderItem(1);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_4->horizontalHeaderItem(2);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "\350\201\267\344\275\215", 0));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_4->horizontalHeaderItem(3);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "\351\203\250\351\226\200", 0));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_4->horizontalHeaderItem(4);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "\350\253\213\345\201\207\351\241\236\345\210\245", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("MainWindow", "\350\253\213\345\201\207\344\272\272\345\223\241", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "\344\273\212\346\227\245\344\270\212\347\217\255\345\223\241\345\267\245", 0));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_5->horizontalHeaderItem(0);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "RID", 0));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_5->horizontalHeaderItem(1);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "ID", 0));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_5->horizontalHeaderItem(2);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "\350\253\213\345\201\207\351\241\236\345\210\245", 0));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget_5->horizontalHeaderItem(3);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "\351\226\213\345\247\213\346\231\202\351\226\223", 0));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget_5->horizontalHeaderItem(4);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "\347\265\220\346\235\237\346\231\202\351\226\223", 0));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget_5->horizontalHeaderItem(5);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "\350\253\213\345\201\207\344\272\213\347\224\261", 0));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget_5->horizontalHeaderItem(6);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "\345\202\231\350\250\273", 0));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget_5->horizontalHeaderItem(7);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "\347\224\263\350\253\213\346\231\202\351\226\223", 0));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget_5->horizontalHeaderItem(8);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow", "\347\213\200\346\205\213", 0));
        approve_button->setText(QApplication::translate("MainWindow", "\351\200\232\351\201\216", 0));
        reject_button->setText(QApplication::translate("MainWindow", "\351\247\201\345\233\236", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\345\257\251\346\240\270", 0));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow", "ID", 0));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem32->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215", 0));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem33->setText(QApplication::translate("MainWindow", "\346\200\247\345\210\245", 0));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem34->setText(QApplication::translate("MainWindow", "\350\201\267\344\275\215", 0));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem35->setText(QApplication::translate("MainWindow", "\351\203\250\351\226\200", 0));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem36->setText(QApplication::translate("MainWindow", "\351\240\220\350\250\255\347\217\255\345\210\245", 0));
        add_button->setText(QApplication::translate("MainWindow", "Add", 0));
        remove_button->setText(QApplication::translate("MainWindow", "Remove", 0));
        modify_button->setText(QApplication::translate("MainWindow", "Modify", 0));
        record_query_button->setText(QApplication::translate("MainWindow", "\350\253\213\345\201\207\347\264\200\351\214\204", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\345\223\241\345\267\245\344\270\200\350\246\275\350\241\250", 0));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget_7->horizontalHeaderItem(0);
        ___qtablewidgetitem37->setText(QApplication::translate("MainWindow", "\351\200\261\344\270\200", 0));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget_7->horizontalHeaderItem(1);
        ___qtablewidgetitem38->setText(QApplication::translate("MainWindow", "\351\200\261\344\272\214", 0));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget_7->horizontalHeaderItem(2);
        ___qtablewidgetitem39->setText(QApplication::translate("MainWindow", "\351\200\261\344\270\211", 0));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget_7->horizontalHeaderItem(3);
        ___qtablewidgetitem40->setText(QApplication::translate("MainWindow", "\351\200\261\345\233\233", 0));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget_7->horizontalHeaderItem(4);
        ___qtablewidgetitem41->setText(QApplication::translate("MainWindow", "\351\200\261\344\272\224", 0));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget_7->horizontalHeaderItem(5);
        ___qtablewidgetitem42->setText(QApplication::translate("MainWindow", "\351\200\261\345\205\255", 0));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget_7->horizontalHeaderItem(6);
        ___qtablewidgetitem43->setText(QApplication::translate("MainWindow", "\351\200\261\346\227\245", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_10), QApplication::translate("MainWindow", "\347\225\266\345\221\250\344\270\212\347\217\255\345\223\241\345\267\245", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\351\201\270\351\240\205", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINWINDOWHP8160_H
