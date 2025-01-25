#include "game.h"
#include <QTime>
#include <QThread>

Game::Game(int n, QWidget *parent)
    : QWidget{parent}
{
    this->n = n;
    isComp = false;

    player1 = new QLabel();
    player1->setText("Player1");
    player1->setFont(QFont("Arial", 15, QFont::Normal, 0));

    player2 = new QLabel();
    player2->setText("Player2");
    player2->setFont(QFont("Arial", 15, QFont::Normal, 0));
    player2->setEnabled(false);

    comp = new QCheckBox();
    comp->setText("Play with computer");
    comp->setFont(QFont("Arial", 15));
    comp->setStyleSheet("QCheckBox::indicator {color: rgb(148, 205, 247);}");
    connect (comp, &QCheckBox::clicked, this, &Game::Clear);


    field = new QGridLayout();
    field->setSpacing(0);
    for(int i = 0; i < n; i++)
        for (int j = 0; j < n; j++){
            QPushButton *b = new QPushButton("");
            b->setFont(QFont("Arial", 250/n));
            connect(b, &QPushButton::clicked, this, &Game::clicked);
            b->setFixedSize(600/n, 600/n);
            b->setStyleSheet("background-color: rgb(148, 205, 247);");
            field->addWidget(b, i, j);
        }


    clear = new QPushButton();
    clear->setFont(QFont("Arial", 15));
    clear->setText("Clear");
    clear->setFixedSize(100, 30);
    clear->setStyleSheet("background-color: rgb(148, 205, 247);");
    connect(clear, &QPushButton::clicked, this, &Game::clearSlot);

    pl_cont = new QHBoxLayout();
    pl_cont->addWidget(player1);
    pl_cont->addWidget(player2);

    container = new QVBoxLayout();
    container->addLayout(pl_cont);
    container->addLayout(field);
    container->addWidget(comp);
    container->addWidget(clear, 0, Qt::AlignCenter);

    setLayout(container);
}

void Game::clicked()
{
     if (((QPushButton*)sender())->text()!="")
        return;
    ((QPushButton*)sender())->setText(isCross?"x":"o");
    char ch = Win(field->indexOf((QPushButton*)sender()));
    isCross = !isCross;
    player1->setEnabled(isCross);
    player2->setEnabled(!isCross);
    if (ch == 0) {
        if (comp->isChecked()){
            Move();
        }

    return;
    }
    IsWin(ch);
}

void Game::Clear()
{
    for(int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            ((QPushButton*)field->itemAtPosition(i, j)->widget())->setText("");
    isCross = true;
    player1->setEnabled(isCross);
    player2->setEnabled(!isCross);

    if(isComp && comp->isChecked())
    {
        Move();
        isComp = false;
    }else if (comp->isChecked())
        isComp = true;
}

void Game::IsWin(char c)
{
    if (c == 0)
        return;
    win = new QMessageBox();
    win->setStyleSheet("background-color: rgb(198, 229, 253);");
    win->setText(c == 'x'?"Player1 win!":c == 'o'?"Player2 win!":"Draw");
    win->setWindowTitle(c=='d'?"Draw":"Win");
    win->setFont(QFont("Courier New", 40, 0, true));
    //win->setStandardButtons(QMessageBox::NoButton);

    connect(win, &QMessageBox::buttonClicked, this, &Game::clearSlot);
    win->show();
}

void Game::Move()
{
    int i, j;
    do {
        QTime time = QTime::currentTime();
        srand(time.msec());
        i = rand() % n;
        j = rand() % n;
    }
    while(((QPushButton*)field->itemAtPosition(i, j)->widget())->text() != "");
    ((QPushButton*)field->itemAtPosition(i, j)->widget())->setText(isCross?"x":"o");
    IsWin(Win(i*n + j));
    isCross = !isCross;
    player1->setEnabled(isCross);
    player2->setEnabled(!isCross);
    return;
}


char Game::Win(int index)
{
    int y = index%n;
    int x = index/n;
    bool flag = true;
    for (int i = 0; i < n; i++)
        if (((QPushButton*)field->itemAtPosition(x, y)->widget())->text() !=
            ((QPushButton*)field->itemAtPosition(i, y)->widget())->text())  {
            flag = false;
            break;
        }
    if (flag)
        return (isCross?'x':'o');

    flag = true;
    for (int i = 0; i < n; i++)
        if (((QPushButton*)field->itemAtPosition(x, y)->widget())->text() !=
            ((QPushButton*)field->itemAtPosition(x, i)->widget())->text())  {
            flag = false;
            break;
        }
    if (flag)
        return (isCross?'x':'o');

    flag = true;
    for (int i = 0; i < n; i++)
        if (((QPushButton*)field->itemAtPosition(x, y)->widget())->text() !=
            ((QPushButton*)field->itemAtPosition(i, i)->widget())->text())  {
            flag = false;
            break;
        }
    if (flag)
        return (isCross?'x':'o');

    flag = true;
    for (int i = 0; i < n; i++)
        if (((QPushButton*)field->itemAtPosition(x, y)->widget())->text() !=
            ((QPushButton*)field->itemAtPosition(i, n - i - 1)->widget())->text())  {
            flag = false;
            break;
        }
    if (flag)
        return (isCross?'x':'o');

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (((QPushButton*)field->itemAtPosition(i, j)->widget())->text() == "")
                return 0;
    return 'd';
}

void Game::clearSlot()
{
    Clear();
}



