#include "readmanager.h"


readmanager::readmanager(QObject *parent) : QObject(parent)
{

}

bool readmanager::read(QString text1)
{
    QSqlQuery query2;
    query2.prepare("SELECT * FROM user WHERE name ='"+text1+"'");
    if(query2.exec()){
        while(query2.next()){
            qDebug()<<"success";
        }
        qDebug()<<"Retreived data SUccessfully";
        return true;
    }
    else{
        qDebug()<<"Failed";
        return false;
    }
}
