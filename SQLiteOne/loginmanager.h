#ifndef LOGINMANAGER_H
#define LOGINMANAGER_H

#include <QObject>
#include <QWidget>
#include <QDebug>
#include <QtSql>

class LoginManager : public QWidget
{
    Q_OBJECT
public:
    explicit LoginManager(QWidget *parent = nullptr);

signals:

public slots:
    bool login(QString username, QString password);

private:
    QSqlDatabase m_database;

};

#endif // LOGINMANAGER_H
