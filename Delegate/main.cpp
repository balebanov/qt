#include "delegate.h"
#include <QApplication>
#include <QStringListModel>
#include <QListView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QStringListModel model;
    model.setStringList(QStringList() <<  "Item 1" << "Item 2" << "Item 3");

    QListView listView;
    listView.setModel(&model);
    listView.setItemDelegate(new Delegate(&listView));
    listView.viewport()->setAttribute(Qt::WA_Hover);
    listView.show();

    return a.exec();
}
