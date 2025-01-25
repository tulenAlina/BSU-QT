#include "addwidget.h"

AddWidget::AddWidget(QString *s, bool *b, QWidget *parent)
    : QDialog{parent}
{
    setStyleSheet("background-color: rgb(250, 235, 215);");
    text = s;
    isLeft = b;
    label = new QLabel("Введите новую зверушку:");

    add_left = new QPushButton("Добавить в \"Обычные животные\"");
    add_left->setStyleSheet("background-color: rgb(232, 205, 170);");
    connect (add_left, &QPushButton::clicked, this, &AddWidget::add_left_slot);

    add_right = new QPushButton("Добавить в \"Крутые животные\"");
    add_right->setStyleSheet("background-color: rgb(232, 205, 170);");
    connect (add_right, &QPushButton::clicked, this, &AddWidget::add_right_slot);

    input = new QLineEdit();

    btns = new QHBoxLayout();
    btns->addWidget(add_left);
    btns->addWidget(add_right);

    cont = new QVBoxLayout();
    cont->addWidget(label);
    cont->addWidget(input);
    cont->addLayout(btns);

    setLayout(cont);
}

void AddWidget::add_left_slot()
{
    *text = input->text();
    *isLeft = true;
    close();
}

void AddWidget::add_right_slot()
{
    *text = input->text();
    *isLeft = false;
    close();
}
