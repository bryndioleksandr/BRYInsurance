#ifndef SHOWEVENTS_H
#define SHOWEVENTS_H

#include <QDialog>
#include "insuranceevents.h"
#include <mysqldbmanager.h>
#include <QSortFilterProxyModel>
#include <QComboBox>
#include <QSqlError>
#include <QVBoxLayout>
#include <QStringList>
#include <QLineEdit>

namespace Ui {
class ShowEvents;
}

class ShowEvents : public QDialog
{
    Q_OBJECT

public:
    explicit ShowEvents(int userId, QString tableName, QWidget *parent = nullptr);
    void showInsurance();
    ~ShowEvents();

private slots:
    void on_tabWidget_currentChanged(int index);

    void on_currentIndexCbChanged(int index, QString sortType);

    void on_findActiveLn_textChanged(const QString &arg1);

private:
    Ui::ShowEvents *ui;
    int currentUserId;
    QString tableName;
    QSqlQueryModel *allTableModel, *activeTableModel, *closedTableModel;
    QComboBox *allComboBox, *activeComboBox, *closedComboBox;
    QComboBox *allComboBoxDesc, *activeComboBoxDesc, *closedComboBoxDesc;
};

#endif // SHOWEVENTS_H
