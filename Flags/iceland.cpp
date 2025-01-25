
#include "iceland.h"

Iceland::Iceland(QWidget *parent)
    : QWidget{parent}
{
}

Iceland::~Iceland()
{
}

void Iceland::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.fillRect(0, 0, width(), height(), Qt::darkGray);
    int x1 = 0;
    int y1 = 0;
    int x2 = width();
    int y2 = height();
    QBrush red(QColor::fromRgb(178, 34, 34));
    QBrush blue(QColor::fromRgb(25, 25, 112));

    if(x2*18/25 <= y2)
    {
        int h = x2*2/3;
        y1 = (height()-h)/2;
        y2 = y1 + h;
    }
    else
    {
        int w = y2*3/2;
        x1 = (width()-w)/2;
        x2 = w + x1;
    }

    painter.fillRect(x1, y1, x2-x1, y2-y1, blue);
    painter.fillRect(x1, y1+(y2-y1)*7/18, x2-x1, (y2-y1)*2/9, Qt::white);
    painter.fillRect(x1+(x2-x1)*7/27, y1, (x2-x1)*4/27, y2-y1, Qt::white);
    painter.fillRect(x1, y1+(y2-y1)*4/9, x2-x1, (y2-y1)*1/9, red);
    painter.fillRect(x1+(x2-x1)*8/27, y1, (x2-x1)*2/27, y2-y1, red);
}

