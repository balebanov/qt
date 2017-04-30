#ifndef CALCULATOR_H
#define CALCULATOR_H
#pragma once

#include <QWidget>
#include <QStack>
#include <QLCDNumber>

class QLCDNumber;
class QPushButton;

namespace Ui {
class Calculator;
}

class Calculator : public QWidget
{
    Q_OBJECT

public:
    Calculator(QWidget* pwgt = 0);
    QPushButton* createButton(const QString& str);
    void calculate();

public slots:
    void slotButtonClicked();

private:
    QLCDNumber* m_plcd; //указатель на виджет индикатора
    QStack<QString> m_stk; //стек для проведения операций
    QString m_strDisplay; //строка для нажатых кнопок

    Ui::Calculator *ui;
};

#endif // CALCULATOR_H
