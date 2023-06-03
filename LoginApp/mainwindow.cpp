#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_loginButton_clicked()
{
    QString username = ui->userbox->text();
    QString password = ui->passbox->text();

    if(username == "Hari" && password == "Hari"){
        QMessageBox::information(this,"Login", "Username and Password are Correct");
        hide();
        newDialog = new NewDialog(this);
        newDialog->show();
      }
    else{
        QMessageBox::warning(this, "Login", "Username and Password doesn't match");
    }

}

