#include "dbconn.h"
#include <QFile>
#include <QDir>
#include <QTextStream>
#include <QFileDialog>
#include <QMessageBox>
#include <QString>

DbConn::DbConn()
{
    qDebug() << "Connecting to db ...";
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString dbPath = getDbPath();

    if (dbPath.isEmpty()) {
        QMessageBox::information(0, "Not Found", "Database Not Found! QFinance will exit now.");
        exit(213);
    }

    db.setDatabaseName(dbPath);
}

QString DbConn::getDbPath()
{
    QFile dbPathTxt(QDir::currentPath() + "/dbpath.txt");
    if (!dbPathTxt.open(QIODevice::ReadWrite | QIODevice::Text)) {
        QMessageBox::information(0, "Error", dbPathTxt.errorString());
        std::ofstream o(dbPathTxt.fileName().toStdString().c_str());
        o << "C:/Users/chint/Downloads/db" << std::endl;
    }
    QTextStream in(&dbPathTxt);
    QString dbPath;
    while (!in.atEnd()) {
        dbPath = in.readLine();
    }
    QFile dbFile(dbPath);
    QFileDialog fileDialog;
    while (!dbFile.exists()) {
        dbPath = fileDialog.getOpenFileName(0, "Open database", QDir::currentPath(), "SQLITE Database (*.sqlite)");
        if (dbPath.isEmpty()) {
            dbPathTxt.close();
            return QString();
        }
        dbFile.setFileName(dbPath);
        QTextStream newPath(&dbPathTxt);
        newPath << dbPath << '\n'; // Correctly dereference dbPath to get the QString
    }

    qDebug() << "fileName is" << dbPath;
    dbPathTxt.close();
    return dbPath;
}

bool DbConn::connectDb()
{
    bool isConnected = db.isOpen();

    if (!isConnected) {
        isConnected = db.open();
    }

    if (db.isOpen())
        qDebug() << "Connected to db ...";

    return isConnected;
}

void DbConn::closeDb()
{
    if (db.isOpen())
        db.close();
    qDebug() << "Closed dbConn ...";
}
