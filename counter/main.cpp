#include "counter.h"
#include <QApplication>
#include <QLabel>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QLabel lbl("0");
    QPushButton cmd("Add");
    Counter counter;

    lbl.show();
    cmd.show();

    QObject::connect(&cmd, SIGNAL(clicked()), &counter, SLOT(slotInc()));
    QObject::connect(&counter, SIGNAL(counterChanged(int)), &lbl, SLOT(setNum(int)));
    QObject::connect(&counter, SIGNAL(goodbye()), &a, SLOT(quit()));

    return a.exec();
}
