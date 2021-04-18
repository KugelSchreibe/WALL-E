#include "window.h"
#include <QApplication>
#include <QtWidgets>
#include <QVector>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QTabWidget tab;
    QStringList lst;

    tab.setWindowTitle("WALL-E");

    lst << "WALL-E" << "Управление" << "Админ" << "Настройки";

    QVector<QWidget*> allWindow{new Wn, new WnControl, new WnAdmin, new WnSetting};

    int count = 0;

    foreach(QString str, lst) {
        tab.addTab(allWindow[count], str);
        count++;
    }

    tab.setFixedSize(600, 600);

    tab.show();

    return app.exec();
}
