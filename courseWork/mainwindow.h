#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QListWidgetItem>
#include <QListWidget>
#include <QLabel>
#include <QLayout>
#include <QPushButton>
#include <QCheckBox>
#include <QLineEdit>
#include <QWidget>
#include "registr.h"
#include "login.h"
#include "mysqldbmanager.h"
#include "User.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class QSqlTableModel;
class DBManager;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(DBManager* dbManager, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_registrPb_clicked();

    void on_loginPb_clicked();

    void on_clearPb_clicked();

private:
    Ui::MainWindow *ui;
    DBManager *db;
    QSqlTableModel  *model;
};
#endif // MAINWINDOW_H
