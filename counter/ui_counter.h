/********************************************************************************
** Form generated from reading UI file 'counter.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COUNTER_H
#define UI_COUNTER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Counter
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Counter)
    {
        if (Counter->objectName().isEmpty())
            Counter->setObjectName(QString::fromUtf8("Counter"));
        Counter->resize(400, 300);
        menuBar = new QMenuBar(Counter);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Counter->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Counter);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Counter->addToolBar(mainToolBar);
        centralWidget = new QWidget(Counter);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Counter->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Counter);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Counter->setStatusBar(statusBar);

        retranslateUi(Counter);

        QMetaObject::connectSlotsByName(Counter);
    } // setupUi

    void retranslateUi(QMainWindow *Counter)
    {
        Counter->setWindowTitle(QApplication::translate("Counter", "Counter", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Counter: public Ui_Counter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COUNTER_H
