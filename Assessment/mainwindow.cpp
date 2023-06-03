#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/HARI/Documents/Qt/DataBase/Login.db");

    if(mydb.open())
    {
        qDebug() << "Database is Connected";
    }
    else
    {
        qDebug() << "Database is not Connected";
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_Read_clicked()
{
    mydb.open();
    QSqlQuery Query_Get_Data(mydb);
    ui->setupUi(this);
    Query_Get_Data.prepare("SELECT * FROM users");
    if(Query_Get_Data.exec())
    {
        int RowNumber = 0;
        while(Query_Get_Data.next())
        {
            int id = Query_Get_Data.value("id").toInt();
            QString name = Query_Get_Data.value("name").toString();
            int rollno = Query_Get_Data.value("rollno").toInt();

            qDebug() << "ID: " << id << ", Name: " << name << ", Mobile No: " << rollno;

            RowNumber = RowNumber + 1;
        }
    }
    else
    {
        qDebug() << "Error executing query: " << Query_Get_Data.lastError().text();
    }

    connect(ui->pushButton_Read, &QPushButton::clicked, this, &MainWindow::on_pushButton_Read_clicked);

    mydb.close();
}



void MainWindow::on_pushButton_Delete_clicked()
{
    mydb.open();
    QSqlDatabase::database().transaction();
    QSqlQuery Query_Delete_Data(mydb);
    Query_Delete_Data.prepare("DELETE FROM users WHERE id =" + ui->lineEdit->text() + "");
    Query_Delete_Data.exec();
    QSqlDatabase::database().commit();
    mydb.close();
}


void MainWindow::on_pushButton_Insert_clicked()
{
    mydb.open();
    QSqlDatabase::database().transaction();
    QSqlQuery Query_Insert_Data(mydb);
    Query_Insert_Data.prepare("INSERT INTO users(name, rollno) VALUES(:name, :rollno)");
    Query_Insert_Data.bindValue(":name", ui->lineEdit_Value1->text());
    Query_Insert_Data.bindValue(":rollno", ui->lineEdit_Value2->text().toInt()); // Assuming rollno is an integer
    Query_Insert_Data.exec();
    QSqlDatabase::database().commit();
    mydb.close();

}


void MainWindow::on_pushButton_Update_clicked()
{
    mydb.open();
    QSqlDatabase::database().transaction();
    QSqlQuery Query_Update_Data(mydb);
    Query_Update_Data.prepare("UPDATE users SET name=:name, rollno=:rollno WHERE id=" + ui->lineEdit->text() + "");
    Query_Update_Data.bindValue(":name", ui->lineEdit_Value1->text());
    Query_Update_Data.bindValue(":rollno", ui->lineEdit_Value2->text().toInt()); // Assuming rollno is an integer
    Query_Update_Data.exec();
    QSqlDatabase::database().commit();
    mydb.close();
}

