#include <QTreeView>
#include <QStandardItemModel>
#include <QStandardItem>
#include "mainwindow.h"


const int ROWS = 2;
const int COLUMNS = 3;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    treeView = new QTreeView(this);
    setCentralWidget(treeView);
    standardModel = new QStandardItemModel ;

    QList<QStandardItem *> preparedRow =prepareRow("first", "second", "third");
    QStandardItem *item = standardModel->invisibleRootItem();
    // adding a row to the invisible root item produces a root element
    item->appendRow(preparedRow);

    QList<QStandardItem *> secondRow =prepareRow("111", "222", "333");
    // adding a row to an item starts a subtree
    preparedRow.first()->appendRow(secondRow);

    treeView->setModel(standardModel);
    treeView->expandAll();
}

QList<QStandardItem *> MainWindow::prepareRow(const QString &first,
                                                const QString &second,
                                                const QString &third)
{
    QList<QStandardItem *> rowItems;
    rowItems << new QStandardItem(first);
    rowItems << new QStandardItem(second);
    rowItems << new QStandardItem(third);
    return rowItems;
}
//! [Quoting ModelView Tutorial]
