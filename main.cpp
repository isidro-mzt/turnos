#include "turnos.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Turnos w;
    w.show();

    return a.exec();
}
