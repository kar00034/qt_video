#include "mainwindow.h"
#include <QApplication>
#include <stdio.h>
int main(int argc, char *argv[])
{
    if(wiringPiSetup() == -1)
        return -1;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
