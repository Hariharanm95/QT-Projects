/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *widget;
    QFormLayout *formLayout;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout;
    QPushButton *Button1;
    QPushButton *Button3;
    QPushButton *Button2;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_10;
    QPushButton *Button0;
    QPushButton *pushButton_12;
    QGridLayout *gridLayout_2;
    QPushButton *Button4;
    QPushButton *Button5;
    QPushButton *Button6;
    QGridLayout *gridLayout_3;
    QPushButton *Button7;
    QPushButton *Button8;
    QPushButton *Button9;
    QLabel *label;
    QGridLayout *gridLayout_6;
    QPushButton *VerifyButton;
    QPushButton *SaveButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->setEnabled(true);
        Dialog->resize(800, 600);
        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(120, 80, 521, 271));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Button1 = new QPushButton(widget);
        Button1->setObjectName(QString::fromUtf8("Button1"));

        gridLayout->addWidget(Button1, 0, 0, 1, 1);

        Button3 = new QPushButton(widget);
        Button3->setObjectName(QString::fromUtf8("Button3"));

        gridLayout->addWidget(Button3, 0, 2, 1, 1);

        Button2 = new QPushButton(widget);
        Button2->setObjectName(QString::fromUtf8("Button2"));

        gridLayout->addWidget(Button2, 0, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pushButton_10 = new QPushButton(widget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        gridLayout_4->addWidget(pushButton_10, 0, 0, 1, 1);

        Button0 = new QPushButton(widget);
        Button0->setObjectName(QString::fromUtf8("Button0"));

        gridLayout_4->addWidget(Button0, 0, 1, 1, 1);

        pushButton_12 = new QPushButton(widget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        gridLayout_4->addWidget(pushButton_12, 0, 2, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 3, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Button4 = new QPushButton(widget);
        Button4->setObjectName(QString::fromUtf8("Button4"));

        gridLayout_2->addWidget(Button4, 0, 0, 1, 1);

        Button5 = new QPushButton(widget);
        Button5->setObjectName(QString::fromUtf8("Button5"));

        gridLayout_2->addWidget(Button5, 0, 1, 1, 1);

        Button6 = new QPushButton(widget);
        Button6->setObjectName(QString::fromUtf8("Button6"));

        gridLayout_2->addWidget(Button6, 0, 2, 1, 1);


        gridLayout_5->addLayout(gridLayout_2, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        Button7 = new QPushButton(widget);
        Button7->setObjectName(QString::fromUtf8("Button7"));

        gridLayout_3->addWidget(Button7, 0, 0, 1, 1);

        Button8 = new QPushButton(widget);
        Button8->setObjectName(QString::fromUtf8("Button8"));

        gridLayout_3->addWidget(Button8, 0, 1, 1, 1);

        Button9 = new QPushButton(widget);
        Button9->setObjectName(QString::fromUtf8("Button9"));

        gridLayout_3->addWidget(Button9, 0, 2, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 2, 0, 1, 1);


        formLayout->setLayout(0, QFormLayout::LabelRole, gridLayout_5);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        VerifyButton = new QPushButton(widget);
        VerifyButton->setObjectName(QString::fromUtf8("VerifyButton"));
        VerifyButton->setEnabled(false);

        gridLayout_6->addWidget(VerifyButton, 0, 1, 1, 1);

        SaveButton = new QPushButton(widget);
        SaveButton->setObjectName(QString::fromUtf8("SaveButton"));
        SaveButton->setEnabled(false);

        gridLayout_6->addWidget(SaveButton, 0, 0, 1, 1);


        formLayout->setLayout(2, QFormLayout::LabelRole, gridLayout_6);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        Button1->setText(QApplication::translate("Dialog", "1", nullptr));
        Button3->setText(QApplication::translate("Dialog", "3", nullptr));
        Button2->setText(QApplication::translate("Dialog", "2", nullptr));
        pushButton_10->setText(QString());
        Button0->setText(QApplication::translate("Dialog", "0", nullptr));
        pushButton_12->setText(QString());
        Button4->setText(QApplication::translate("Dialog", "4", nullptr));
        Button5->setText(QApplication::translate("Dialog", "5", nullptr));
        Button6->setText(QApplication::translate("Dialog", "6", nullptr));
        Button7->setText(QApplication::translate("Dialog", "7", nullptr));
        Button8->setText(QApplication::translate("Dialog", "8", nullptr));
        Button9->setText(QApplication::translate("Dialog", "9", nullptr));
        label->setText(QApplication::translate("Dialog", "Please Enter a code and press save", nullptr));
        VerifyButton->setText(QApplication::translate("Dialog", "Verify", nullptr));
        SaveButton->setText(QApplication::translate("Dialog", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
