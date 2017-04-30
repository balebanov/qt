#include "mouseobserver.h"
#include "ui_mouseobserver.h"
#include <QLabel>
#include <QMouseEvent>

MouseObserver::MouseObserver(QWidget *pwgt) :
    QLabel(pwgt)
{
    setAlignment(Qt::AlignCenter);
    setText("Mouse interactions\n(Press a mouse button)");
}

/*virtual*/void MouseObserver::mousePressEvent(QMouseEvent *pe){
    dumpEvent(pe, "Mouse pressed");
}

/*virtual*/void MouseObserver::mouseReleaseEvent(QMouseEvent *pe){
    dumpEvent(pe, "Mouse realised");
}

/*virtual*/void MouseObserver::mouseMoveEvent(QMouseEvent *pe){
    dumpEvent(pe, "Mouse is moving");
}

void MouseObserver::dumpEvent(QMouseEvent *pe, const QString &strMsg){
    setText(strMsg
            + "\n button() =" + buttonsInfo(pe)
            + "\n x()=" + QString::number(pe->x())
            + "\n y()=" + QString::number(pe->y())
            + "\n globalX()=" + QString::number(pe->globalX())
            + "\n globalY()=" + QString::number(pe->globalY())
            + "\n modifers()=" + modifiersInfo(pe)
            );
}

QString MouseObserver::modifiersInfo(QMouseEvent *pe){
    QString strModifers;

    if(pe->modifers() & Qt::ShiftModifier){
        strModifers += "Shift ";
    }
    if(pe->modifers() & Qt::AltModifier){
        strModifers += "Alt ";
    }
    if(pe->modifers() & Qt::ControlModifier){
        strModifers += "Control ";
    }
    return strModifers;
}

QString MouseObserver::buttonsInfo(QMouseEvent *pe){
    QString strButtons;
    if(pe->buttons() & Qt::LeftButton){
        strButtons += "Left ";
    }
    if(pe->buttons() & Qt::RightButton){
        strButtons += "Right ";
    }
    if(pe->buttons() & Qt::MidButton){
        strButtons += "Middle ";
    }
    return strButtons;
}

MouseObserver::~MouseObserver()
{
    delete ui;
}
