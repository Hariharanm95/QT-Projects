/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_Read;
    QPushButton *pushButton_Delete;
    QPushButton *pushButton_Insert;
    QPushButton *pushButton_Update;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_Value1;
    QLineEdit *lineEdit_Value2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QMenu *menuCRUD;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("/* Set background color for QMainWindow */\n"
"QMainWindow {\n"
"    background-color: #F0F0F0;\n"
"}\n"
"\n"
"/* Set font and size for QPushButton */\n"
"QPushButton {\n"
"    font: bold 14px;\n"
"    color: #FFFFFF;\n"
"    background-color: #007ACC;\n"
"    border: none;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"/* Set hover effect for QPushButton */\n"
"QPushButton:hover {\n"
"    background-color: #009FE3;\n"
"}\n"
"\n"
"/* Set font and size for QLineEdit */\n"
"QLineEdit {\n"
"    font: 12px;\n"
"    color: #000000;\n"
"    background-color: #FFFFFF;\n"
"    border: 1px solid #CCCCCC;\n"
"    border-radius: 3px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"/* Set font and size for QLabel */\n"
"QLabel {\n"
"    font: bold 12px;\n"
"    color: #000000;\n"
"}\n"
"\n"
"/* Set spacing and alignment for labels and line edits */\n"
"QLabel, QLineEdit {\n"
"    margin: 5px;\n"
"}\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_Read = new QPushButton(centralwidget);
        pushButton_Read->setObjectName(QString::fromUtf8("pushButton_Read"));
        pushButton_Read->setGeometry(QRect(130, 60, 101, 51));
        pushButton_Delete = new QPushButton(centralwidget);
        pushButton_Delete->setObjectName(QString::fromUtf8("pushButton_Delete"));
        pushButton_Delete->setGeometry(QRect(270, 60, 101, 51));
        pushButton_Insert = new QPushButton(centralwidget);
        pushButton_Insert->setObjectName(QString::fromUtf8("pushButton_Insert"));
        pushButton_Insert->setGeometry(QRect(400, 60, 101, 51));
        pushButton_Update = new QPushButton(centralwidget);
        pushButton_Update->setObjectName(QString::fromUtf8("pushButton_Update"));
        pushButton_Update->setGeometry(QRect(530, 60, 111, 51));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(130, 160, 511, 41));
        lineEdit_Value1 = new QLineEdit(centralwidget);
        lineEdit_Value1->setObjectName(QString::fromUtf8("lineEdit_Value1"));
        lineEdit_Value1->setGeometry(QRect(130, 230, 511, 31));
        lineEdit_Value2 = new QLineEdit(centralwidget);
        lineEdit_Value2->setObjectName(QString::fromUtf8("lineEdit_Value2"));
        lineEdit_Value2->setGeometry(QRect(130, 290, 511, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 140, 47, 14));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 210, 47, 14));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 270, 91, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuCRUD = new QMenu(menubar);
        menuCRUD->setObjectName(QString::fromUtf8("menuCRUD"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuCRUD->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_Read->setText(QApplication::translate("MainWindow", "Read", nullptr));
        pushButton_Delete->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        pushButton_Insert->setText(QApplication::translate("MainWindow", "Insert", nullptr));
        pushButton_Update->setText(QApplication::translate("MainWindow", "Update", nullptr));
        lineEdit->setText(QString());
        lineEdit_Value1->setText(QString());
        lineEdit_Value2->setText(QString());
        label->setText(QApplication::translate("MainWindow", "ID", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Name", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Mobile number", nullptr));
        menuCRUD->setTitle(QApplication::translate("MainWindow", "CRUD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
