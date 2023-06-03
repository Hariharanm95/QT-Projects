#ifndef READMANAGER_H
#define READMANAGER_H

#include <QObject>
#include <QWidget>
#include <QtSql>
#include<QFile>
#include<QDebug>

class readmanager : public QObject
{
    Q_OBJECT
public:
    explicit readmanager(QObject *parent = nullptr);

signals:

public slots:
    bool read(QString text1);
private:
    QSqlDatabase db;
};

#endif // READMANAGER_H
