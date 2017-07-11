#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>
#include <QLabel>
#include "exampleobject.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QLabel* getLbl() const;

private slots:
    void on_write_1_clicked();
    void on_write_2_clicked();
    void on_start_clicked();
    void on_stop_clicked();

private:
    Ui::MainWindow *ui;
    QThread thread_1;
    QThread thread_2;
    ExampleObject exampleObject_1;
    ExampleObject exampleObject_2;
};

#endif // MAINWINDOW_H
