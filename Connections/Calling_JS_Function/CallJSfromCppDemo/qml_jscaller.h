#ifndef QML_JSCALLER_H
#define QML_JSCALLER_H

#include <QObject>

class Qml_JScaller : public QObject
{
    Q_OBJECT
public:
    explicit Qml_JScaller(QObject *parent = nullptr);

    Q_INVOKABLE void cppMethod(QString parameter);
    void setQmlRootObject(QObject *value);

signals:

public slots:

private:
    void callJSmethod(QString param);
    QObject *qmlRootObject;
};

#endif // QML_JSCALLER_H
