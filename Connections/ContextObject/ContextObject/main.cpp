#include <QGuiApplication>
#include <QQmlContext>
#include <QQmlApplicationEngine>

#include "propertywrapper.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    /*
    QString firstName = "Adrian";
    QString lastName = "Cedillo";
    */

    QQmlApplicationEngine engine;

    PropertyWrapper propWrapper;
    propWrapper.setFirstname("Adrian");
    propWrapper.setLastname("Cedillo");

    /*
    engine.rootContext() -> setContextProperty("mLastName", QVariant::fromValue(lastName));
    engine.rootContext() -> setContextProperty("mFirstName", QVariant::fromValue(firstName));
    */

    engine.rootContext() -> setContextObject(&propWrapper);

    engine.load( QUrl (QStringLiteral("qrc:/main.qml")));
    if(engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
