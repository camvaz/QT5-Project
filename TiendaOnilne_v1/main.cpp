#include "tienda_v1.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Tienda_v1 w;
    w.show();

    return a.exec();
}
