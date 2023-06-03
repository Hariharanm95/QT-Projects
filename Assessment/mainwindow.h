#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QFileInfo>
#include <QSqlDatabase> // Include the header for QSqlDatabase
#include <QSqlQuery>    // Include the header for QSqlQuery
#include <QSqlError>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_Read_clicked();

    void on_pushButton_Delete_clicked();

    void on_pushButton_Insert_clicked();

    void on_pushButton_Update_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase mydb;
};
#endif // MAINWINDOW_H
