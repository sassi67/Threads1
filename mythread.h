#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QString>

class MyThread : public QThread
{
    Q_OBJECT
public:
    explicit MyThread(QObject *parent = 0);

    void setMessage(const QString& msg);
    void stop();
signals:

public slots:

protected:
    void run();

private:
    volatile bool   m_Stopped;
    QString         m_Msg;

};

#endif // MYTHREAD_H
