#ifndef CPPWORKER_H
#define CPPWORKER_H

#include <QObject>

class cppWorker : public QObject
{
    Q_OBJECT
public:
    explicit cppWorker(QObject *parent = nullptr);

    Q_INVOKABLE void regularMethod();

    Q_INVOKABLE QString regularMethodWithReturn(QString name, int age);

signals:

public slots:
    void ccpSlot();
};

void cppWorker::ccpSlot()
{

}

#endif // CPPWORKER_H
