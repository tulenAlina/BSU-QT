
#ifndef ICELAND_H
#define ICELAND_H


#include <QWidget>
#include <QPainter>


class Iceland : public QWidget
{
    Q_OBJECT
public:
    Iceland(QWidget *parent = nullptr);
    ~Iceland();
private:
    void paintEvent(QPaintEvent *);
};

#endif // ICELAND_H
