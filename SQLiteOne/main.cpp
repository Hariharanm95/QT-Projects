#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtSql>

#include "loginmanager.h"


int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);
    qmlRegisterType<LoginManager>("com.example.login",1,0,"Loginmanager");
    QSqlDatabase m_database = QSqlDatabase::addDatabase("QSQLITE");
    m_database.setDatabaseName("D:/QT projects/MyDbApp/login.db");

    if(!m_database.open()){
        qDebug()<<"Failed to open Database";
        return -1;
    }



    QSqlQuery query;
    if(!query.exec("CREATE TABLE IF NOT EXISTS users(id INTEGER PRIMARY KEY AUTOINCREMENT,username TEXT, password TEXT")){
        qDebug()<<"Failed to Create Table!";
        return -1;
    }

    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QQmlApplicationEngine engine;

    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
