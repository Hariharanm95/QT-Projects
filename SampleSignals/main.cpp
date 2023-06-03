#include "widget.h"
#include <QApplication>
#include <QPushButton>
#include <QSlider>
#include <QProgressBar>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    QSlider slider;
    QProgressBar bar;
    slider.setEnabled(false); // disable the slider initially
    slider.show();
    bar.show();

    QObject::connect(&slider, SIGNAL(valueChanged(int)), &bar, SLOT(setValue(int)));
    QObject::connect(&slider, SIGNAL(valueChanged(int)), &w, SLOT(setMyValue(int)));
    QObject::connect(&w, SIGNAL(iamready(bool)), &slider, SLOT(setEnabled(bool)));

    QPushButton *b1 = new QPushButton("Welcome");
    b1->show();

    QObject::connect(b1, SIGNAL(clicked(bool)), &w, SLOT(getValue()));
    QObject::connect(&w, SIGNAL(iamready(bool)), &slider, SLOT(setEnabled(bool)));

    return a.exec();
}

