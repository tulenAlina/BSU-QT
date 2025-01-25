#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    game = new Game(3, this);
    setCentralWidget(game);
}

MainWindow::MainWindow(int n, QWidget *parent)
    : QMainWindow(parent)
{
    setStyleSheet("background-color: rgb(198, 229, 253);");
    game = new Game(n, this);
    setCentralWidget(game);
}

MainWindow::~MainWindow()
{
}

