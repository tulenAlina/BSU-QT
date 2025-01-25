
#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QCheckBox>
#include <QPushButton>
#include <QMessageBox>
#include <QAction>


class Game : public QWidget
{
    Q_OBJECT
public:
    Game(int ,QWidget *parent = nullptr);

private:
    int n;
    QLabel *player1;
    QLabel *player2;
    QPushButton *clear;
    QGridLayout *field;
    QVBoxLayout *container;
    QHBoxLayout *pl_cont;
    QCheckBox *comp;
    QMessageBox *win;
    char Win(int index);
    void Clear();
    void IsWin(char c);
    void Move();

    bool isCross;
    bool isComp;
private slots:
    void clicked();
    void clearSlot();
};

#endif // GAME_H
