#ifndef PROGRESS_H
#define PROGRESS_H
#pragma once
#include <QWidget>

class QProgressBar;

namespace Ui {
class Progress;
}

class Progress : public QWidget
{
    Q_OBJECT

public:
    Progress(QWidget* pobj = 0);

public slots:
    void slotStep();
    void slotReset();

private:
    QProgressBar* m_pprb;
    int m_nStep;
    Ui::Progress *ui;
};

#endif // PROGRESS_H
