#include <QCoreApplication>
#include <QTranslator>

int main(int argc, char* argv[])
{
    QTranslator translator;

    if(!translator.load(":/translations/lang.qm")) {
        qDebug("Error loading the translation");
    }

    QCoreApplication app{argc, argv};
    app.installTranslator(&translator);

    qDebug(qPrintable(QObject::tr("Hello")));

    return 0;
}
