
#ifndef UAE_H
#define UAE_H


#include <QWidget>
#include <QPainter>

class UAE : public QWidget
{
    Q_OBJECT
public:
    UAE(QWidget *parent = nullptr);
    ~UAE();
 private:
    void paintEvent(QPaintEvent *);
};

#endif // UAE_H
