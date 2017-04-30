#include "hierarchialmodel.h"
#include "ui_hierarchialmodel.h"

HierarchialModel::HierarchialModel(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HierarchialModel)
{
    ui->setupUi(this);
}

HierarchialModel::~HierarchialModel()
{
    delete ui;
}
