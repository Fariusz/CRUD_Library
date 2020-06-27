#include "crud_library.h"

CRUD_Library::CRUD_Library()
{
}

bool CRUD_Library::cAddDatabase(QString name, QString hostName, QString databaseName, QString userName, QString password)
{
    m_dataBase = QSqlDatabase::addDatabase(name);
    m_dataBase.setHostName(hostName);
    m_dataBase.setDatabaseName(databaseName);
    m_dataBase.setUserName(userName);
    m_dataBase.setPassword(password);
}
