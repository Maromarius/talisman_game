#include <QtGui/QApplication>
#include <QtCore/QCoreApplication>
#include "mainwindow.h"
#include "threadstest.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    ThreadsTest thread;
    thread.start();



    MainWindow w;

    w.show();
    
    return a.exec();
}
