#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(&thread_1, &QThread::started, &exampleObject_1, &ExampleObject::run);
    connect(&thread_2, &QThread::started, &newObj_2, &newExampleObject::run);
    connect(&exampleObject_1, &ExampleObject::finished, &thread_1, &QThread::terminate);
    connect(&newObj_2, &newExampleObject::finished, &thread_2, &QThread::terminate);

    connect(&exampleObject_1, &ExampleObject::sendMessage, ui->counter, &QLabel::setText);
    connect(&newObj_2, &newExampleObject::sendMessage, ui->counter2, &QLabel::setText);

    exampleObject_1.moveToThread(&thread_1);
    newObj_2.moveToThread(&thread_2);
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
    newObj_2.setMessage(ui->lineEdit_2->text());
}

void MainWindow::on_start_clicked()
{
    exampleObject_1.setRunning(true);
    newObj_2.setRunning(true);
    thread_1.start();
    thread_2.start();
}

void MainWindow::on_stop_clicked()
{
    exampleObject_1.setRunning(false);
    newObj_2.setRunning(false);
}

void MainWindow::on_quitB_clicked()
{
    on_stop_clicked();
    this->close();
}
