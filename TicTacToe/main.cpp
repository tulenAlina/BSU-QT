
#include "mainwindow.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w(10);
    w.setMaximumSize(0, 0);
    //w.setWindowFlags(Qt::WindowFlags()|Qt::WindowCloseButtonHint|Qt::WindowMinimizeButtonHint);
    w.show();
    return a.exec();
}
