
#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QPushButton>
#include <QTableWidget>
#include <QLineEdit>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>


class Game : public QWidget
{
    Q_OBJECT
public:
    Game(QWidget *parent = nullptr);
private:
    int n = 0;
    int num;
    bool pressStart;
    QPushButton *start_btn;
    QLabel *state_lbl;
    QPushButton *records_btn;
    QLabel *input_lbl;
    QLineEdit *input;
    QPushButton *check_btn;
    QTableWidget *numbers;
    QTableWidget *records;

    QHBoxLayout *start_cont;
    QHBoxLayout *input_cont;
    QVBoxLayout *num_table_cont;
    QVBoxLayout *res_table_cont;
    QHBoxLayout *table_cont;
    QVBoxLayout *container;
    QVBoxLayout *rec_cont;

    QWidget *recordsWidget;

    bool rep(int i);
    std::pair<int, int> bac(int n1, int n2);
private slots:
    void checkSlot();
    void newGameSlot();
    void recordsSlot();
};

#endif // GAME_H
