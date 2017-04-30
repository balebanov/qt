#ifndef BUTTONS_H
#define BUTTONS_H

#include <QMainWindow>

namespace Ui {
class Buttons;
}

class Buttons : public QMainWindow
{
    Q_OBJECT

public:
    explicit Buttons(QWidget *parent = 0);
    ~Buttons();

private:
    Ui::Buttons *ui;
};

#endif // BUTTONS_H
