#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "dialog.h"
#include <QProcess>
#include <QComboBox>
#include <QStringList>
#include <QDebug>
#include <qtimer.h>
#include <unistd.h>
#include <qdatetime.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    QProcess process;
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
        QString datedata = QDate::currentDate().toString("MM/dd/yyyy");
        ui->datelabel->setText(datedata);
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
    pid_t p;
    p = fork();
    // The arguments to pass to the program

    // Start the process
    if (p == 0){
        if (ui->lineEdit->isVisible()){
            QStringList arguments;
            QProcess *process = new QProcess();

            arguments<<ui->Users->currentText();

            arguments<<ui->lineEdit->text();

            process->start("bash /etc/userscripts/menu/pwd.sh", arguments);
            if (process->waitForFinished(-1)) {
                QByteArray output = process->readAllStandardOutput();
                QByteArray error = process->readAllStandardError();
            }
        }else{
            QStringList arguments;

            QProcess *process = new QProcess();
            arguments<<ui->Users->currentText();

            process->start("bash /etc/userscripts/menu/nopwd.sh", arguments);

        }
    }
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
    Dialog *dlg = new Dialog(this);
    dlg->setAttribute(Qt::WA_DeleteOnClose);
    dlg->exec(); // Show as modal
}


