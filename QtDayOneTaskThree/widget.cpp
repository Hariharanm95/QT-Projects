#include "widget.h"

#include <QCheckBox>
#include <QGroupBox>
#include <QRadioButton>
#include <QVBoxLayout>


QGroupBox *Widget::createFirstExclusive()
{
    QGroupBox *groupBox = new QGroupBox(tr("Exclusive Radio Button"));

    QRadioButton *radio1 = new QRadioButton(tr("&Radio Button 1"));
    QRadioButton *radio2 = new QRadioButton(tr("&Radio Button 2"));
    QRadioButton *radio3 = new QRadioButton(tr("&Radio Button 3"));
    radio1->setChecked(true);
    QVBoxLayout *vbox = new QVBoxLayout;
        vbox->addWidget(radio1);
        vbox->addWidget(radio2);
        vbox->addWidget(radio3);
        vbox->addStretch(1);
        groupBox->setLayout(vbox);

        return groupBox;

}

QGroupBox *Widget::createFirstNonExclusive()
{
    QGroupBox *groupBox = new QGroupBox(tr("Non Exclusive Radio Button"));

    QCheckBox *c1 = new QCheckBox(tr("&Check Box 1"));
    QCheckBox *c2 = new QCheckBox(tr("&Check Box 2"));
    QCheckBox *c3 = new QCheckBox(tr("&Check Box 3"));
    c3->setTristate(true);
    c1->setChecked(true);
    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(c1);
    vbox->addWidget(c2);
    vbox->addWidget(c3);
    vbox->addStretch(1);
    groupBox->setLayout(vbox);


        return groupBox;
}

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QGridLayout *grid = new QGridLayout;
    grid->addWidget(createFirstExclusive(),0,0);
    grid->addWidget(createFirstNonExclusive(),0,1);
    setLayout(grid);
    setWindowTitle(tr("Group Boxes"));
    resize(480,320);

}

Widget::~Widget()
{
}

