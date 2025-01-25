
#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    game = new Game();
    setCentralWidget(game);
    setStyleSheet("background-color: rgb(250, 225, 242);");
}

MainWindow::~MainWindow()
{
}


