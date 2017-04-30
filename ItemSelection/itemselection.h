#ifndef ITEMSELECTION_H
#define ITEMSELECTION_H

#include <QMainWindow>

namespace Ui {
class ItemSelection;
}

class ItemSelection : public QMainWindow
{
    Q_OBJECT

public:
    explicit ItemSelection(QWidget *parent = 0);
    ~ItemSelection();

private:
    Ui::ItemSelection *ui;
};

#endif // ITEMSELECTION_H
