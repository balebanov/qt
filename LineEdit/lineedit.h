#ifndef LINEEDIT_H
#define LINEEDIT_H

#include <QMainWindow>

namespace Ui {
class LineEdit;
}

class LineEdit : public QMainWindow
{
    Q_OBJECT

public:
    explicit LineEdit(QWidget *parent = 0);
    ~LineEdit();

private:
    Ui::LineEdit *ui;
};

#endif // LINEEDIT_H
