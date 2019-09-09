#include <QGuiApplication>
#include <QQmlContext>
#include <QQmlApplicationEngine>
#include <qml_jscaller.h>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    Qml_JScaller js_Caller;

    QQmlApplicationEngine engine;
    engine.rootContext() -> setContextProperty("QmlJScaller", &js_Caller);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if(engine.rootObjects().isEmpty()) {
        return -1;
    } else {
        js_Caller.setQmlRootObject(engine.rootObjects().first());
    }

return app.exec();
}
