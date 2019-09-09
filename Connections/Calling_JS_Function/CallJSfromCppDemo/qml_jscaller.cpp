#include "qml_jscaller.h"

#include "QDebug"

Qml_JScaller::Qml_JScaller(QObject *parent) : QObject(parent)
{

}

void Qml_JScaller::cppMethod(QString parameter)
{
    qDebug() << "This is C++ talking, calling QML Javascript function";
    callJSmethod(parameter);
}

void Qml_JScaller::setQmlRootObject(QObject *value)
{
    qmlRootObject = value;
}

void Qml_JScaller::callJSmethod(QString param)
{
    QVariant returnedValue;
    QVariant cppParameter = QVariant::fromValue(param);

    QMetaObject::invokeMethod(qmlRootObject, "qmlJSfunction",
                                                           Q_RETURN_ARG(QVariant, returnedValue),
                                                            Q_ARG(QVariant, cppParameter));
    qDebug() << "C++ talking, done calling QML JavaScript, the return value is:", returnedValue.toString();
}
