#include "lineedit.h"
#include "ui_lineedit.h"

LineEdit::LineEdit(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LineEdit)
{
    ui->setupUi(this);
}

LineEdit::~LineEdit()
{
    delete ui;
}
