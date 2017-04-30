#ifndef DIAL_H
#define DIAL_H

#include <QMainWindow>

namespace Ui {
class Dial;
}

class Dial : public QMainWindow
{
    Q_OBJECT

public:
    explicit Dial(QWidget *parent = 0);
    ~Dial();

private:
    Ui::Dial *ui;
};

#endif // DIAL_H
