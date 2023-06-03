#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

signals:
    void iamready(bool val);

public slots:
    void setMyValue(int val);
    void getValue();
    void timeExpired();
};
#endif // WIDGET_H
