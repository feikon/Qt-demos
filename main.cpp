#include "wavewidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    waveWidget w;
    w.show();

    return a.exec();
}
