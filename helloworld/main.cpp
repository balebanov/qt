#include "mainwindow.h"
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLabel lbl("Hello, world!");
    lbl.show();

    return a.exec();
}
