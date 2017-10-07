#include "Content.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Content w;
    w.show();
    return a.exec();
}
