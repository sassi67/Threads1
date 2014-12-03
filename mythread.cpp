#include "mythread.h"
#include <QDebug>

MyThread::MyThread(QObject *parent) :
    QThread(parent),
    m_Stopped(false)
{
}

void MyThread::setMessage(const QString& msg)
{
    m_Msg = msg;
}

void MyThread::stop()
{
    m_Stopped = true;
}

void MyThread::run()
{
    while (m_Stopped == false) {
       qDebug() << qPrintable(m_Msg);
       sleep(1);
    }
    m_Stopped = false;
}
