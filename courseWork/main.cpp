#include "login.h"
#include "mysqldbmanager.h"
#include "Logger.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    Logger::init();
    QApplication a(argc, argv);

    DBManager* dbManager = MySqlDBManager::getInstance();

    Login w(dbManager);
    w.show();
    bool state = a.exec();
    Logger::clean();
    return state;
}
