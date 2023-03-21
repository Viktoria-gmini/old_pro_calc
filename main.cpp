#include "mainwindow.h"
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QString translatorFileName = QLatin1String("qt_");
    translatorFileName += QLocale::system().name();
    QTranslator *translator = new QTranslator(&app);
    if (translator->load(translatorFileName, QLibraryInfo::location(QLibraryInfo::TranslationsPath)))
        app.installTranslator(translator);
    MainWindow w;
    w.show();
    return app.exec();
}
