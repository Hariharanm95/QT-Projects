#ifndef WIDGET_H
#define WIDGET_H
#include <QGroupBox>
#include <QWidget>
QT_BEGIN_NAMESPACE
class QGroupBox;
QT_END_NAMESPACE
class Widget : public QWidget
{
    Q_OBJECT

private:
    QGroupBox *createFirstExclusive();
    QGroupBox *createFirstNonExclusive();
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
};
#endif // WIDGET_H
