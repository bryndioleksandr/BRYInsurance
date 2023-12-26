#include "showevents.h"
#include "ui_showevents.h"


ShowEvents::ShowEvents(int userId, QString tableName, QWidget *parent) :
    QDialog(parent),
    currentUserId(userId),
    tableName(tableName),
    allTableModel(new QSqlQueryModel(this)),
    activeTableModel(new QSqlQueryModel(this)),
    closedTableModel(new QSqlQueryModel(this)),
    ui(new Ui::ShowEvents)
{
    ui->setupUi(this);

    activeComboBox = new QComboBox();
    closedComboBox = new QComboBox();

    activeComboBoxDesc = new QComboBox();
    closedComboBoxDesc = new QComboBox();
    QStringList autoItems = {"insurancePolicy", "coverageAmount", "insurancePrice", "cubicCapacity", "carryingCapacity", "motoCubic", "city", "autoYear", "autoPrice", "startDate", "endDate"};
    QStringList travelItems = {"insurancePolicy", "coverageAmount", "insurancePrice", "travelDirection", "travelActivities", "startDate", "endDate"};
    QStringList gadgetItems = {"insurancePolicy", "insurancePrice", "gadgetBrand", "gadgetModel", "gadgetPrice", "startDate", "endDate"};
    if(tableName == "AutoInsurance"){
    activeComboBox->addItems(autoItems);
    closedComboBox->addItems(autoItems);

    activeComboBoxDesc->addItems(autoItems);
    closedComboBoxDesc->addItems(autoItems);
    }
    else if(tableName == "TravelInsurance"){
    activeComboBox->addItems(travelItems);
    closedComboBox->addItems(travelItems);

    activeComboBoxDesc->addItems(travelItems);
    closedComboBoxDesc->addItems(travelItems);
    }
    else if(tableName == "GadgetInsurance"){
    activeComboBox->addItems(gadgetItems);
    closedComboBox->addItems(gadgetItems);

    activeComboBoxDesc->addItems(gadgetItems);
    closedComboBoxDesc->addItems(gadgetItems);
    }
    activeComboBox->setVisible(true);
    closedComboBox->setVisible(true);

    activeComboBoxDesc->setVisible(true);
    closedComboBoxDesc->setVisible(true);

    activeComboBox->setPlaceholderText("Sort by ASC");
    closedComboBox->setPlaceholderText("Sort by ASC");

    activeComboBoxDesc->setPlaceholderText("Sort by DESC");
    closedComboBoxDesc->setPlaceholderText("Sort by DESC");

    connect(activeComboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), this, [=](int index){ on_currentIndexCbChanged(index, "ASC"); });
    connect(closedComboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), this, [=](int index){ on_currentIndexCbChanged(index, "ASC"); });

    connect(activeComboBoxDesc, QOverload<int>::of(&QComboBox::currentIndexChanged), this, [=](int index){ on_currentIndexCbChanged(index, "DESC"); });
    connect(closedComboBoxDesc, QOverload<int>::of(&QComboBox::currentIndexChanged), this, [=](int index){ on_currentIndexCbChanged(index, "DESC"); });

    connect(ui->findClosedLn, &QLineEdit::textChanged, this, &ShowEvents::on_findActiveLn_textChanged);

    ui->activeLayout->addWidget(activeComboBox);
    ui->activeLayout->addWidget(activeComboBoxDesc);

    ui->closedLayout->addWidget(closedComboBox);
    ui->closedLayout->addWidget(closedComboBoxDesc);

    ui->activeTableView->setModel(activeTableModel);
    ui->closedTableView->setModel(closedTableModel);
    showInsurance();
}



void ShowEvents::on_currentIndexCbChanged(int index, QString sortType){
    MySqlDBManager* db= MySqlDBManager::getInstance();
    QSqlQuery query;

    if (tableName == "AutoInsurance") {
    switch (index) {
    case 0: // insurancePolicy
        if (ui->tabWidget->currentIndex() == 0)
            query = db->sortTable(tableName, "insurancePolicy", sortType, currentUserId);
        else if (ui->tabWidget->currentIndex() == 1)
            query = db->sortTable("Deleted" + tableName, "insurancePolicy", sortType, currentUserId);
        break;
    case 1: // coverageAmount
        if (ui->tabWidget->currentIndex() == 0)
            query = db->sortTable(tableName, "coverageAmount", sortType, currentUserId);
        else if (ui->tabWidget->currentIndex() == 1)
            query = db->sortTable("Deleted" + tableName, "coverageAmount", sortType, currentUserId);
        break;
    case 2: // insurancePrice
        if (ui->tabWidget->currentIndex() == 0)
            query = db->sortTable(tableName, "insurancePrice", sortType, currentUserId);
        else if (ui->tabWidget->currentIndex() == 1)
            query = db->sortTable("Deleted" + tableName, "insurancePrice", sortType, currentUserId);
        break;
    case 3: // cubicCapacity (for Car)
        if (ui->tabWidget->currentIndex() == 0)
            query = db->sortTable(tableName, "cubicCapacity", sortType, currentUserId);
        else if (ui->tabWidget->currentIndex() == 1)
            query = db->sortTable("Deleted" + tableName, "cubicCapacity", sortType, currentUserId);
        break;
    case 4: // carryingCapacity (for Truck)
        if (ui->tabWidget->currentIndex() == 0)
            query = db->sortTable(tableName, "carryingCapacity", sortType, currentUserId);
        else if (ui->tabWidget->currentIndex() == 1)
            query = db->sortTable("Deleted" + tableName, "carryingCapacity", sortType, currentUserId);
        break;
    case 5: // motoCubic (for Motorcycle)
        if (ui->tabWidget->currentIndex() == 0)
            query = db->sortTable(tableName, "motoCubic", sortType, currentUserId);
        else if (ui->tabWidget->currentIndex() == 1)
            query = db->sortTable("Deleted" + tableName, "motoCubic", sortType, currentUserId);
        break;
    case 6: // city (for Bus)
        if (ui->tabWidget->currentIndex() == 0)
            query = db->sortTable(tableName, "city", sortType, currentUserId);
        else if (ui->tabWidget->currentIndex() == 1)
            query = db->sortTable("Deleted" + tableName, "city", sortType, currentUserId);
        break;
    case 7: // autoYear
        if (ui->tabWidget->currentIndex() == 0)
            query = db->sortTable(tableName, "autoYear", sortType, currentUserId);
        else if (ui->tabWidget->currentIndex() == 1)
            query = db->sortTable("Deleted" + tableName, "autoYear", sortType, currentUserId);
        break;
    case 8: // autoPrice
        if (ui->tabWidget->currentIndex() == 0)
            query = db->sortTable(tableName, "autoPrice", sortType, currentUserId);
        else if (ui->tabWidget->currentIndex() == 1)
            query = db->sortTable("Deleted" + tableName, "autoPrice", sortType, currentUserId);
        break;
    case 9: // startDate
        if (ui->tabWidget->currentIndex() == 0)
            query = db->sortTable(tableName, "start_date", sortType, currentUserId);
        else if (ui->tabWidget->currentIndex() == 1)
            query = db->sortTable("Deleted" + tableName, "start_date", sortType, currentUserId);
        break;
    case 10: // endDate
        if (ui->tabWidget->currentIndex() == 0)
            query = db->sortTable(tableName, "end_date", sortType, currentUserId);
        else if (ui->tabWidget->currentIndex() == 1)
            query = db->sortTable("Deleted" + tableName, "end_date", sortType, currentUserId);
        break;
    }
    } else if (tableName == "TravelInsurance") {
    switch (index) {
    case 0: // insurancePolicy
        if (ui->tabWidget->currentIndex() == 0)
            query = db->sortTable(tableName, "insurancePolicy", sortType, currentUserId);
        else if (ui->tabWidget->currentIndex() == 1)
            query = db->sortTable("Deleted" + tableName, "insurancePolicy", sortType, currentUserId);
        break;
    case 1: // coverageAmount
        if (ui->tabWidget->currentIndex() == 0)
            query = db->sortTable(tableName, "coverageAmount", sortType, currentUserId);
        else if (ui->tabWidget->currentIndex() == 1)
            query = db->sortTable("Deleted" + tableName, "coverageAmount", sortType, currentUserId);
        break;
    case 2: // insurancePrice
        if (ui->tabWidget->currentIndex() == 0)
            query = db->sortTable(tableName, "insurancePrice", sortType, currentUserId);
        else if (ui->tabWidget->currentIndex() == 1)
            query = db->sortTable("Deleted" + tableName, "insurancePrice", sortType, currentUserId);
        break;
    case 3: // travelDirection
        if (ui->tabWidget->currentIndex() == 0)
            query = db->sortTable(tableName, "travelDirection", sortType, currentUserId);
        else if (ui->tabWidget->currentIndex() == 1)
            query = db->sortTable("Deleted" + tableName, "travelDirection", sortType, currentUserId);
        break;
    case 4: // travelActivities
        if (ui->tabWidget->currentIndex() == 0)
            query = db->sortTable(tableName, "travelActivities", sortType, currentUserId);
        else if (ui->tabWidget->currentIndex() == 1)
            query = db->sortTable("Deleted" + tableName, "travelActivities", sortType, currentUserId);
        break;
    case 5: // startDate
        if (ui->tabWidget->currentIndex() == 0)
            query = db->sortTable(tableName, "start_date", sortType, currentUserId);
        else if (ui->tabWidget->currentIndex() == 1)
            query = db->sortTable("Deleted" + tableName, "start_date", sortType, currentUserId);
        break;
    case 6: // endDate
        if (ui->tabWidget->currentIndex() == 0)
            query = db->sortTable(tableName, "end_date", sortType, currentUserId);
        else if (ui->tabWidget->currentIndex() == 1)
            query = db->sortTable("Deleted" + tableName, "end_date", sortType, currentUserId);
        break;
    }
    } else if (tableName == "GadgetInsurance") {
    switch (index) {
    case 0: // insurancePolicy
        if (ui->tabWidget->currentIndex() == 0)
            query = db->sortTable(tableName, "insurancePolicy", sortType, currentUserId);
        else if (ui->tabWidget->currentIndex() == 1)
            query = db->sortTable("Deleted" + tableName, "insurancePolicy", sortType, currentUserId);
        break;
    case 1: // insurancePrice
        if (ui->tabWidget->currentIndex() == 0)
            query = db->sortTable(tableName, "insurancePrice", sortType, currentUserId);
        else if (ui->tabWidget->currentIndex() == 1)
            query = db->sortTable("Deleted" + tableName, "insurancePrice", sortType, currentUserId);
        break;
    case 2:
        if (ui->tabWidget->currentIndex() == 0)
            query = db->sortTable(tableName, "gadgetBrand", sortType, currentUserId);
        else if (ui->tabWidget->currentIndex() == 1)
            query = db->sortTable("Deleted" + tableName, "gadgetBrand", sortType, currentUserId);
        break;
    case 3:
        if (ui->tabWidget->currentIndex() == 0)
            query = db->sortTable(tableName, "gadgetModel", sortType, currentUserId);
        else if (ui->tabWidget->currentIndex() == 1)
            query = db->sortTable("Deleted" + tableName, "gadgetModel", sortType, currentUserId);
        break;
    case 4:
        if (ui->tabWidget->currentIndex() == 0)
            query = db->sortTable(tableName, "gadgetPrice", sortType, currentUserId);
        else if (ui->tabWidget->currentIndex() == 1)
            query = db->sortTable("Deleted" + tableName, "gadgetPrice", sortType, currentUserId);
        break;
     case 5: // startDate
        if (ui->tabWidget->currentIndex() == 0)
            query = db->sortTable(tableName, "start_date", sortType, currentUserId);
        else if (ui->tabWidget->currentIndex() == 1)
            query = db->sortTable("Deleted" + tableName, "start_date", sortType, currentUserId);
        break;
    case 6: // endDate
        if (ui->tabWidget->currentIndex() == 0)
            query = db->sortTable(tableName, "end_date", sortType, currentUserId);
        else if (ui->tabWidget->currentIndex() == 1)
            query = db->sortTable("Deleted" + tableName, "end_date", sortType, currentUserId);
        break;
    }
    }

    QSqlQueryModel *queryModel;
    QTableView *tableView;
    if (ui->tabWidget->currentIndex() == 0) {
    queryModel = activeTableModel;
    tableView = ui->activeTableView;
    } else if(ui->tabWidget->currentIndex() == 1){
    queryModel = closedTableModel;
    tableView = ui->closedTableView;
    }
    queryModel->setQuery(query);
    tableView->setModel(queryModel);

    tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    tableView->resizeColumnsToContents();
    tableView->reset();
}

ShowEvents::~ShowEvents()
{
    delete ui;
}

void ShowEvents::on_tabWidget_currentChanged(int index)
{
    switch (index) {
    case 0: // Active Insurance
        showInsurance();
        break;
    case 1: // Closed Insurance
        showInsurance();
        break;
    }
}

void ShowEvents::showInsurance()
{
    QString queryString;
    QSqlQueryModel *queryModel;
    QTableView *tableView;

     if (ui->tabWidget->currentIndex() == 0) {
        queryModel = activeTableModel;
        tableView = ui->activeTableView;
    } else if(ui->tabWidget->currentIndex() == 1){
        queryModel = closedTableModel;
        tableView = ui->closedTableView;
    }

    if(ui->tabWidget->currentIndex() == 0){
        queryString = "SELECT * FROM "+tableName+" WHERE " + tableName+ ".user_id = "+QString::number(currentUserId)+";";
    }
    else if(ui->tabWidget->currentIndex() == 1){
        queryString = "SELECT * FROM Deleted"+tableName+" WHERE Deleted" + tableName+ ".user_id = "+QString::number(currentUserId)+";";
    }

    QSqlQuery query;
    query.prepare(queryString);
    if (!query.exec()) {
        qDebug() << "SQL Error:" << query.lastError().text();
    }

    queryModel->setQuery(query);
    tableView->setModel(queryModel);

    tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    tableView->resizeColumnsToContents();
    tableView->reset();

}

void ShowEvents::on_findActiveLn_textChanged(const QString &arg1)
{
    MySqlDBManager* db= MySqlDBManager::getInstance();
    QSqlQuery query;
    QString tableNameNew;
    if(ui->tabWidget->currentIndex() == 0) tableNameNew = tableName;
    else if(ui->tabWidget->currentIndex() == 1) tableNameNew = "Deleted"+tableName;
    //finding:
    query = db->findInTable(tableNameNew, currentUserId, arg1);
    QSqlQueryModel *queryModel;
    QTableView *tableView;
    if (ui->tabWidget->currentIndex() == 0) {
        queryModel = activeTableModel;
        tableView = ui->activeTableView;
    } else if(ui->tabWidget->currentIndex() == 1){
        queryModel = closedTableModel;
        tableView = ui->closedTableView;
    }
    queryModel->setQuery(query);
    tableView->setModel(queryModel);

    tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    tableView->resizeColumnsToContents();
    tableView->reset();
}

