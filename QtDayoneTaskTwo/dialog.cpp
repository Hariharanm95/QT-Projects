#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect(ui->Button1, &QPushButton::clicked,this, &Dialog::append);
    connect(ui->Button2, &QPushButton::clicked,this, &Dialog::append);
    connect(ui->Button3, &QPushButton::clicked,this, &Dialog::append);
    connect(ui->Button4, &QPushButton::clicked,this, &Dialog::append);
    connect(ui->Button5, &QPushButton::clicked,this, &Dialog::append);
    connect(ui->Button6, &QPushButton::clicked,this, &Dialog::append);
    connect(ui->Button7, &QPushButton::clicked,this, &Dialog::append);
    connect(ui->Button8, &QPushButton::clicked,this, &Dialog::append);
    connect(ui->Button9, &QPushButton::clicked,this, &Dialog::append);
    connect(ui->Button0, &QPushButton::clicked,this, &Dialog::append);

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::append()
{
    QPushButton* btn = qobject_cast<QPushButton*>(sender());
    if(!btn) return;

    temp.append(btn->text());
    ui->label->setText("Typed:" + temp);

    if(code.isEmpty())
    {
        ui->SaveButton->setEnabled(true);
        ui->VerifyButton->setEnabled(false);
    }
    else
    {
        ui->SaveButton->setEnabled(false);
        ui->VerifyButton->setEnabled(true);
    }
}


void Dialog::on_SaveButton_clicked()
{
    code = temp;
    temp.clear();
    ui->SaveButton->setEnabled(false);
    ui->VerifyButton->setEnabled(true);

    ui->label->setText("Code saved, Please re-enter the code and click verify");
    QMessageBox::information(this,"Saved", ui->label->text());
}


void Dialog::on_VerifyButton_clicked()
{
    if(temp == code)
    {
        QMessageBox::information(this,"Code","The codes match!");
    }
    else
    {
        QMessageBox::critical(this,"Code","The codes do not match!");
    }

    temp.clear();
    ui->label->setText(("Enter the code and click verify"));

}
