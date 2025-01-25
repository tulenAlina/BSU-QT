
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGridLayout>


MainWindow::MainWindow(QWidget *parent) : QWidget(parent)
{
    QWidget::setWindowTitle("Flags");
    resize(800, 400);
    QGridLayout *grid = new QGridLayout(this);
    tabWidget = new QTabWidget();
    tab1 = new UAE();
    tab2 = new Iceland();
    tabWidget->addTab(tab1, "United Arab Emirates");
    tabWidget->addTab(tab2, "Iceland");
    grid->addWidget(tabWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}


