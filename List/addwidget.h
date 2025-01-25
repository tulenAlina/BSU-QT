
#ifndef ADDWIDGET_H
#define ADDWIDGET_H


#include <QDialog>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>

class AddWidget : public QDialog
{
    Q_OBJECT
public:
    AddWidget(QString *s, bool *b, QWidget *parent = nullptr);
private:
    QVBoxLayout *cont;
    QHBoxLayout *btns;
    QLabel *label;
    QPushButton *add_left;
    QPushButton *add_right;
    QLineEdit *input;

    QString *text;
    bool *isLeft;
private slots:
    void add_left_slot();
    void add_right_slot();
};

#endif // ADDWIDGET_H
