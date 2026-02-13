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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
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
    QFrame *frame_2;
    QHBoxLayout *Status;
    QLabel *clock;
    QSpacerItem *horizontalSpacer_5;
    QLabel *datelabel;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QFrame *Login_2;
    QHBoxLayout *Login;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QFrame *gridFrame;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *LoginButton;
    QLineEdit *lineEdit;
    QComboBox *Users;
    QLabel *label;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
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
"}\n"
"\n"
"#Login{\n"
"	background-color: rgb(142, 221, 255);\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(0, 32));
        QFont font;
        font.setPointSize(12);
        frame_2->setFont(font);
        frame_2->setStyleSheet(QString::fromUtf8("#frame_2{background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0.614404 rgba(208, 208, 208, 255), stop:0.867967 rgba(135, 135, 135, 255), stop:0.896175 rgba(195, 195, 195, 255), stop:0.944444 rgba(240, 240, 240, 255), stop:1 rgba(203, 203, 203, 255));}"));
        Status = new QHBoxLayout(frame_2);
        Status->setObjectName(QString::fromUtf8("Status"));
        clock = new QLabel(frame_2);
        clock->setObjectName(QString::fromUtf8("clock"));
        QFont font1;
        font1.setPointSize(16);
        clock->setFont(font1);

        Status->addWidget(clock);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Status->addItem(horizontalSpacer_5);

        datelabel = new QLabel(frame_2);
        datelabel->setObjectName(QString::fromUtf8("datelabel"));
        datelabel->setFont(font1);

        Status->addWidget(datelabel);


        verticalLayout->addWidget(frame_2);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"\n"
"background-image: url(:/BG/img/BG.png);\n"
"  background-size: cover;\n"
"  background-repeat: no-repeat;\n"
"}"));
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        Login_2 = new QFrame(frame);
        Login_2->setObjectName(QString::fromUtf8("Login_2"));
        Login = new QHBoxLayout(Login_2);
        Login->setObjectName(QString::fromUtf8("Login"));
        Login->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Login->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, -1, -1);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        gridFrame = new QFrame(Login_2);
        gridFrame->setObjectName(QString::fromUtf8("gridFrame"));
        gridFrame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: rgb(189, 203, 218);\n"
"}"));
        gridFrame->setFrameShape(QFrame::Box);
        gridFrame->setFrameShadow(QFrame::Raised);
        gridFrame->setLineWidth(4);
        gridLayout = new QGridLayout(gridFrame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(8, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 17);
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        LoginButton = new QPushButton(gridFrame);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));
        LoginButton->setFont(font);

        horizontalLayout->addWidget(LoginButton);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);

        lineEdit = new QLineEdit(gridFrame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFont(font);
        lineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        Users = new QComboBox(gridFrame);
        Users->setObjectName(QString::fromUtf8("Users"));
        Users->setFont(font);

        gridLayout->addWidget(Users, 0, 1, 1, 1);

        label = new QLabel(gridFrame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(48, 48));
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("image: url(:/img/profile.png);"));

        gridLayout->addWidget(label, 0, 0, 2, 1);


        verticalLayout_2->addWidget(gridFrame);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);


        Login->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        Login->addItem(horizontalSpacer);


        verticalLayout_4->addWidget(Login_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/Power.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(32, 32));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_4->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(frame);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        clock->setText(QString());
        datelabel->setText(QString());
        LoginButton->setText(QCoreApplication::translate("MainWindow", "Log in", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
