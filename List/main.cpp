
#include "mainwindow.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Животные");
    w.setWindowIcon(QIcon("C:/Users/Asus/Desktop/QT/List/dog.png"));
    w.show();
    return a.exec();
}
