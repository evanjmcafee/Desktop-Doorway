/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *Status;
    QLabel *clock;
    QSpacerItem *horizontalSpacer_5;
    QLabel *Date;
    QHBoxLayout *Login;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QComboBox *Users;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *LoginButton;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *Options;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-style: outset;\n"
"	border-color: rgb(128, 128, 128);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.032, y2:1, stop:0 rgba(225, 225, 225, 255), stop:0.5 rgba(255, 255, 255, 255), stop:1 rgba(225, 225, 225, 255));\n"
"	border-width: 2px;\n"
"	border-radius: 4px;\n"
"\n"
"}\n"
"QPushButton:pressed{\n"
"	border-style: inset;\n"
"	border-color: rgb(128, 128, 128);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0.032, y2:1, stop:0 rgba(255, 255, 255, 255), stop:0.5 rgba(225, 225, 225, 255), stop:1 rgba(255, 255, 255, 255));\n"
"	border-width: 2px;\n"
"	border-radius: 4px;\n"
"}\n"
"\n"
"QLineEdit{\n"
"	border-style: inset;\n"
"	border-color: rgb(128, 128, 128);\n"
"	border-width:2px;\n"
"	border-radius: 8px;\n"
"}\n"
"QTreeView{\n"
"	border-style: solid;\n"
"	border-width:1px;\n"
"}\n"
"QListView{\n"
"	border-style: solid;\n"
"	border-width:1px;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Status = new QHBoxLayout();
        Status->setObjectName(QString::fromUtf8("Status"));
        clock = new QLabel(centralwidget);
        clock->setObjectName(QString::fromUtf8("clock"));
        QFont font;
        font.setPointSize(16);
        clock->setFont(font);

        Status->addWidget(clock);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Status->addItem(horizontalSpacer_5);

        Date = new QLabel(centralwidget);
        Date->setObjectName(QString::fromUtf8("Date"));
        Date->setFont(font);

        Status->addWidget(Date);


        verticalLayout->addLayout(Status);

        Login = new QHBoxLayout();
        Login->setObjectName(QString::fromUtf8("Login"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Login->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, -1, -1);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        Users = new QComboBox(centralwidget);
        Users->setObjectName(QString::fromUtf8("Users"));
        QFont font1;
        font1.setPointSize(12);
        Users->setFont(font1);

        verticalLayout_2->addWidget(Users);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font1);
        lineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(lineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 17);
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        LoginButton = new QPushButton(centralwidget);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));
        LoginButton->setFont(font1);

        horizontalLayout->addWidget(LoginButton);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);


        Login->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Login->addItem(horizontalSpacer);


        verticalLayout->addLayout(Login);

        Options = new QHBoxLayout();
        Options->setObjectName(QString::fromUtf8("Options"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Options->addItem(horizontalSpacer_6);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/Power.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(32, 32));

        Options->addWidget(pushButton);


        verticalLayout->addLayout(Options);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        clock->setText(QString());
        Date->setText(QString());
        LoginButton->setText(QCoreApplication::translate("MainWindow", "Log in", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
