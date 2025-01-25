
#include "mainwindow.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Быки и коровы");
    w.setWindowIcon(QIcon("C:/Users/Asus/Desktop/QT/BullsCows/caw.PNG"));
    w.show();
    return a.exec();
}
