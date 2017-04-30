#include "dial.h"
#include "ui_dial.h"

Dial::Dial(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Dial)
{
    ui->setupUi(this);
}

Dial::~Dial()
{
    delete ui;
}
