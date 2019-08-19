#include "cppworker.h"

#include "qdebug.h"

cppWorker::cppWorker(QObject *parent) : QObject(parent)
{
    qDebug() << "cpp is talking";
}

void cppWorker::regularMethod()
{

}

QString cppWorker::regularMethodWithReturn(QString name, int age)
{

}
