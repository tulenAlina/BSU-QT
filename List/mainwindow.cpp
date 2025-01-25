
#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    list = new List();
    setCentralWidget(list);
    setStyleSheet("background-color: rgb(250, 235, 215);");
}

MainWindow::~MainWindow()
{
}


