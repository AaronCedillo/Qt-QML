#ifndef CPPWORKER_H
#define CPPWORKER_H

#include <QObject>

class cppWorker : public QObject
{
    Q_OBJECT
public:
    explicit cppWorker(QObject *parent = nullptr);

signals:

public slots:
};

#endif // CPPWORKER_H
