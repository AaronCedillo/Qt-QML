#ifndef CPPSIGNALSENDER_H
#define CPPSIGNALSENDER_H

#include <QObject>

class CppSignalSender : public QObject
{
    Q_OBJECT
public:
    explicit CppSignalSender(QObject *parent = nullptr);

signals:
    void callQml(QString parameter);

public slots:
    void cppSlot();
};

#endif // CPPSIGNALSENDER_H
