#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQuickControls2/QQuickStyle>
#include "measurementdata.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    // Регистрируем типы с правильными URI и версиями
    qmlRegisterType<MeasurementData>("com.example", 1, 0, "MeasurementData");
    qmlRegisterType<FileParser>("com.example", 1, 0, "FileParser");
    qmlRegisterType<DataProcessor>("com.example", 1, 0, "DataProcessor");

    QQuickStyle::setStyle("Material");

    QQmlApplicationEngine engine;
    engine.loadFromModule("untitled10", "Main");

    return app.exec();
}
