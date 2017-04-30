#ifndef LIST_H
#define LIST_H

#include <QMainWindow>

namespace Ui {
class List;
}

class List : public QMainWindow
{
    Q_OBJECT

public:
    explicit List(QWidget *parent = 0);
    ~List();

private:
    Ui::List *ui;
};

#endif // LIST_H
