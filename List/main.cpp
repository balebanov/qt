#include "list.h"
#include <QApplication>
#include <QComboBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QComboBox cbo;
    QStringList lst;

    lst << "Item 1" << "Item 2" << "Item 3" << "Item 4";
    cbo.addItems(lst);
    cbo.setEditable(false);
    cbo.show();
    cbo.resize(100, 150);

    return a.exec();
}
