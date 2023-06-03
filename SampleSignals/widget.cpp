#include "widget.h"

#include <BoseSpeaker.h>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    qDebug()<<Q_FUNC_INFO<<endl;
    QTimer *t = new QTimer;
    t->setInterval(10*1000);
    connect(t,SIGNAL(timeout()), this, SLOT(timeExpired()));
    QTimer::singleShot(10000,this, SLOT(timeExpired()));

}

Widget::~Widget()
{

}

void Widget::setMyValue(int val)
{
    qDebug()<<Q_FUNC_INFO<<"value = "<<val<<endl;
    BoseSpeaker *sp = new BoseSpeaker;
    sp->setVolume(val);


}

void Widget::getValue()
{
    qDebug()<<Q_FUNC_INFO<<endl;
}

void Widget::timeExpired()
{
    qDebug()<<"Timer Expired"<<endl;
    emit iamready(true);
}

