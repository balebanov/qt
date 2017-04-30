#include "intlistmodel.h"
#include <QApplication>
#include <QListView>
#include <QTableView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    IntListModel model(QList<int>() << 123 << 5432 << 32 << 742 << 15);

    QListView list;
    list.setModel(&model);
    list.show();

    QTableView table;
    table.setModel(&model);
    table.show();

    return a.exec();
}
