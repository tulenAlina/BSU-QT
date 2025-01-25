
#include "uae.h"

UAE::UAE(QWidget *parent)
    : QWidget{parent}
{

}

UAE::~UAE()
{
}

void UAE::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.fillRect(0, 0, width(), height(), Qt::darkGray);
    int x1 = 0;
    int y1 = 0;
    int x2 = width();
    int y2 = height();

    if(x2/2 <= y2)
    {
        int h = x2/2;
        y1 = (height()-h)/2;
        y2 = y1 + h;
    }
    else
    {
        int w = y2*2;
        x1 = (width()-w)/2;
        x2 = w + x1;
    }

        painter.fillRect(x1, y1, (x2-x1)/5, y2-y1, Qt::red);
        painter.fillRect(x1+(x2-x1)/5, y1, (x2-x1)*4/5, (y2-y1)/3, Qt::darkGreen);
        painter.fillRect(x1+(x2-x1)/5, y1+((y2-y1)/3), (x2-x1)*4/5, (y2-y1)/3, Qt::white);
        painter.fillRect(x1+(x2-x1)/5, y2-((y2-y1)/3), (x2-x1)*4/5, (y2-y1)/3, Qt::black);
}

