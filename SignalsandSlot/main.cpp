#include "widget.h"
#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    QVBoxLayout *vlyt = new QVBoxLayout;

    for (int i = 0; i < 6; i++) {
        QPushButton *btn = new QPushButton("Welcome");
        vlyt->addWidget(btn);
        QObject::connect(btn, SIGNAL(clicked()), &w, SLOT(setWelcome()));
    }

    w.setLayout(vlyt);
    w.show();

    return a.exec();
}
