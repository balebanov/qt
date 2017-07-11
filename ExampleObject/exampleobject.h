#ifndef EXAMPLEOBJECT_H
#define EXAMPLEOBJECT_H
#include <QObject>
#include <QLabel>

class ExampleObject : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool running READ running WRITE setRunning NOTIFY runningChanged)
    Q_PROPERTY(QString message READ message WRITE setMessage NOTIFY messageChanged)
    Q_PROPERTY(QString message_2 READ message_2 WRITE setMessage_2 NOTIFY message_2Changed)

    bool m_running;
    QString m_message;
    QString m_message_2;
    int count;
    QLabel *pLabel;

public:
    explicit ExampleObject(QObject *parent = 0);
    bool running() const;
    QString message() const;
    QString message_2() const;
    long int pCounter;
    void setLabel(QLabel*);
    //MainWindow *pMW;

signals:
    void finished();
    void runningChanged(bool running);
    void messageChanged(QString message);
    void message_2Changed(QString message_2);
    void sendMessage(QString message);
    //void sendCounter(int counter);

public slots:
    void run();
    void setRunning(bool running);
    void setMessage(QString message);
    void setMessage_2(QString message_2);
};

#endif // EXAMPLEOBJECT_H
