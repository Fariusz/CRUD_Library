//Created by Jacek Barć & Radosław Loth

#ifndef CRUD_LIBRARY_H
#define CRUD_LIBRARY_H

#include "CRUD_Library_global.h"
#include "QtSql/QSql"
#include "QtSql/QSqlDatabase"

class CRUD_LIBRARY_EXPORT CRUD_Library
{
protected:
    QSqlDatabase m_dataBase;
    bool m_connected;
public:
    CRUD_Library();
    bool cAddDatabase(QString name, QString hostName, QString databaseName, QString userName, QString password);
};

#endif // CRUD_LIBRARY_H
