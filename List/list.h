
#ifndef LIST_H
#define LIST_H


#include <QWidget>
#include <QListWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QCheckBox>
#include <QDialog>
#include <QLabel>
#include "addwidget.h"


class List : public QWidget
{
    Q_OBJECT
public:
    List(QWidget *parent = nullptr);

private:
    QLabel *left_list_name;
    QLabel *right_list_name;

    QPushButton *left_btn;
    QPushButton *right_btn;
    QListWidgetItem *item1;
    QListWidgetItem *item2;
    QListWidgetItem *item3;
    QListWidgetItem *item4;
    QListWidgetItem *item5;
    QListWidgetItem *item6;
    QListWidgetItem *item7;
    QPushButton *sort_l;
    QPushButton *sort_r;
    QPushButton *clear_left;
    QPushButton *clear_right;
    QHBoxLayout *under_btn_cont_left;
    QHBoxLayout *under_btn_cont_right;
    QListWidget *left_l;
    QListWidget *right_l;
    QVBoxLayout *left_list_cont;
    QVBoxLayout *right_list_cont;
    QHBoxLayout *list_container;
    QVBoxLayout *btn_cont;
    QCheckBox *multi_sel;
    QCheckBox *pictogram;
    QPushButton *remove;
    QPushButton *addItem;
private slots:
    void lSlot();
    void rSlot();
    void mulSlot();
    void rSort();
    void lSort();
    void clearLeft();
    void clearRight();
    void editSlot();
    void removeSlot();
    void addSlot();
    void pictSlot();
};

#endif // LIST_H
