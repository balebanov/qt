#ifndef HIERARCHIALMODEL_H
#define HIERARCHIALMODEL_H

#include <QMainWindow>

namespace Ui {
class HierarchialModel;
}

class HierarchialModel : public QMainWindow
{
    Q_OBJECT

public:
    explicit HierarchialModel(QWidget *parent = 0);
    ~HierarchialModel();

private:
    Ui::HierarchialModel *ui;
};

#endif // HIERARCHIALMODEL_H
