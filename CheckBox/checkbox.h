#ifndef CHECKBOX_H
#define CHECKBOX_H

#include <QMainWindow>

namespace Ui {
class CheckBox;
}

class CheckBox : public QMainWindow
{
    Q_OBJECT

public:
    explicit CheckBox(QWidget *parent = 0);
    ~CheckBox();

private:
    Ui::CheckBox *ui;
};

#endif // CHECKBOX_H
