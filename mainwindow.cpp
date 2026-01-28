#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QProcess>
#include <QComboBox>
#include <QStringList>
#include <QDebug>
#include <QTimer>
#include <QTime>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{QProcess process;
    // The 'cat /etc/passwd' command lists all users on Linux systems
    process.start("dir", QStringList() << "/home");
    process.waitForFinished(); // Wait for the process to finish

    QString output = process.readAllStandardOutput();
    QStringList lines = output.split('\n');
    ui->setupUi(this);

    foreach (const QString &line, lines) {
        if (!line.isEmpty()) {
            // Extract the username (first field, delimited by ':')
            QString username = line.section(':', 0, 0);
            ui->Users->addItems(lines);

        }
    }
    QTimer *t = new QTimer(this);
    t->setInterval(1000);
    connect(t, &QTimer::timeout, [&]() {
        QString Time = QTime::currentTime().toString(" hh:mm AP");
        QString Date = QTime::currentTime().toString("MM/dd ");
        ui->Date->setText(Date);
        ui->clock->setText(Time);
    } );
    t->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LoginButton_pressed()
{
    login();
}

void MainWindow::login(){
    QString username;
    
}
void MainWindow::on_Users_currentIndexChanged(int index)
{
    // passwd -S <NAME> | grep -o NP

    QProcess process;
    QString program = "passwd"; // The command to run
    QStringList arguments;
    arguments << "-S" << ui->Users->currentText();

    process.start(program, arguments);
    process.waitForFinished(-1);
    QString standardOutput = QString::fromUtf8(process.readAllStandardOutput());
    QString standardError = QString::fromUtf8(process.readAllStandardError());
    QStringList values = standardOutput.split(" ");
    QString pass=values.at(1);
    if(pass == "NP"){
        ui->lineEdit->setVisible(false);
    }else{
        ui->lineEdit->setVisible(true);
    }
}


void MainWindow::on_lineEdit_returnPressed()
{
    login();
}

void MainWindow::on_pushButton_pressed()
{
    dialog d = new dialog();

    // Open it modally and wait for user interaction
    d.exec();
}


