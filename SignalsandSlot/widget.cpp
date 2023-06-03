#include "widget.h"
#include <QtDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
}

Widget::~Widget()
{
}

void Widget::setWelcome()
{
    qDebug()<<Q_FUNC_INFO<<"Welcomme Button is Clicked"<<endl;
}

