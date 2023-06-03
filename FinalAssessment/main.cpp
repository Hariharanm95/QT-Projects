#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include "tablemodel.h" // Include TableModel header

void createTable()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/HARI/Documents/Qt/DataBase/Login.db");

    if (!db.open())
    {
        qDebug() << "Failed to open database: " << db.lastError().text();
    }
    else
    {
        qDebug() << "Database is Connected";
    }
}

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    // Register TableModel type
    qmlRegisterType<TableModel>("TableModel", 1, 0, "TableModel");

    // Call createTable() function
    createTable();

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
