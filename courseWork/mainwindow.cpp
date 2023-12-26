#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(DBManager* dbManager, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    try{
        dbManager->connectToDataBase();
    }catch(const std::exception &ex){
        qCritical()<<"Here is exception: "<<ex.what();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_registrPb_clicked()
{
    Registr reg;
    reg.setModal(true);
    reg.exec();
}


void MainWindow::on_loginPb_clicked()
{/*
    Login login;
    login.setModal(true);
    login.exec();*/
}


void MainWindow::on_clearPb_clicked()
{
//    SqliteDBManager *dbManager = SqliteDBManager::getInstance();
//    try{
//        if (dbManager->clearUserTable()) {
//            QMessageBox::information(this, "Delete Users", "Now table about Users is clear!");
//        }
//    }catch(const std::exception &ex){
//        QMessageBox::critical(this, "Clear Users", "Error in clearing");
//        qWarning()<<"Exception: "<<ex.what();
//    }
}

