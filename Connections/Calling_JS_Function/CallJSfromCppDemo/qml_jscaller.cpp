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

}
