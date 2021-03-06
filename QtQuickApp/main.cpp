#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "weather.h"

int main(int argc, char *argv[])
{
    qputenv("QT_IM_MODULE", QByteArray("qtvirtualkeyboard"));

    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);


  //  QObject* pObj=engine.rootObjects().first();
  //  QObject* pButton=pObj->findChild<QObject*>("button");

    qmlRegisterType<Weather>("com.luxoft.c005",1,0,"Weather");
    engine.load(url);
    return app.exec();
}
