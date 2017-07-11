#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Запуск выполнения метода run будет осуществляться по сигналу запуска от соответствующего потока
    connect(&thread_1, &QThread::started, &exampleObject_1, &ExampleObject::run);
    connect(&thread_2, &QThread::started, &exampleObject_2, &ExampleObject::run);
    // Остановка потока же будет выполняться по сигналу finished от соответствующего объекта в потоке
    connect(&exampleObject_1, &ExampleObject::finished, &thread_1, &QThread::terminate);
    connect(&exampleObject_2, &ExampleObject::finished, &thread_2, &QThread::terminate);
    // коннект для передачи данных из первого объекта в первом потоке, ко второму объекту во втором потоке
    connect(&exampleObject_1, &ExampleObject::sendMessage, &exampleObject_2, &ExampleObject::setMessage_2, Qt::DirectConnection);
    exampleObject_1.moveToThread(&thread_1);    // Передаём объекты в соответствующие потоки
    exampleObject_2.moveToThread(&thread_2);
    exampleObject_1.setLabel(ui->counter);
    exampleObject_2.setLabel(ui->counter2);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_write_1_clicked()
{
    exampleObject_1.setMessage(ui->lineEdit_1->text());
}

void MainWindow::on_write_2_clicked()
{
    exampleObject_2.setMessage(ui->lineEdit_2->text());
}

void MainWindow::on_start_clicked()
{
    exampleObject_1.setRunning(true);
    exampleObject_2.setRunning(true);
    thread_1.start();
    thread_2.start();
}

void MainWindow::on_stop_clicked()
{
    exampleObject_1.setRunning(false);
    exampleObject_2.setRunning(false);
}

QLabel* MainWindow::getLbl() const {
    return ui->counter;
}
