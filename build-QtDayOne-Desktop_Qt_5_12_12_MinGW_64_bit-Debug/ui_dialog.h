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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *TextBox;
    QPushButton *SubmitButton;
    QPushButton *CancelButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(800, 600);
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(160, 110, 481, 191));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        TextBox = new QLineEdit(groupBox);
        TextBox->setObjectName(QString::fromUtf8("TextBox"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, TextBox);

        SubmitButton = new QPushButton(groupBox);
        SubmitButton->setObjectName(QString::fromUtf8("SubmitButton"));

        formLayout->setWidget(2, QFormLayout::LabelRole, SubmitButton);

        CancelButton = new QPushButton(groupBox);
        CancelButton->setObjectName(QString::fromUtf8("CancelButton"));

        formLayout->setWidget(2, QFormLayout::FieldRole, CancelButton);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        groupBox->setTitle(QApplication::translate("Dialog", "GroupBox", nullptr));
        label->setText(QApplication::translate("Dialog", "Enter the UserName", nullptr));
        SubmitButton->setText(QApplication::translate("Dialog", "Submit", nullptr));
        CancelButton->setText(QApplication::translate("Dialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
