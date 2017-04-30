#include "itemselection.h"
#include <QApplication>
#include <QStringListModel>
#include <QTreeView>
#include <QListView>
#include <QTableView>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget wgt;

    QStringListModel model;
    model.setStringList(QStringList() << "Item 1" << "Item 2" << "Item 3");

    QTreeView* pTreeView = new QTreeView;
    pTreeView->setModel(&model);

    QListView* pListView = new QListView;
    pListView->setModel(&model);

    QTableView* pTableView = new QTableView;
    pTableView->setModel(&model);

    QItemSelectionModel selection(&model);
    pTreeView->setSelectionModel(&selection);
    pListView->setSelectionModel(&selection);
    pTableView->setSelectionModel(&selection);

    QVBoxLayout* phbxLayout = new QVBoxLayout;
    phbxLayout->addWidget(pTreeView);
    phbxLayout->addWidget(pListView);
    phbxLayout->addWidget(pTableView);

    wgt.setLayout(phbxLayout);
    wgt.show();

    return a.exec();
}
