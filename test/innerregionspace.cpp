#include "InnerRegionSpace.h"

InnerRegionSpace::InnerRegionSpace()
{

}

InnerRegionSpace::InnerRegionSpace(int x, int y)
{
    int StartX = x;
    int StartY = y;

    setPos(mapToParent(StartX, StartY));
}

QRectF InnerRegionSpace::boundingRect() const
{
    return QRect(0, 0, 80, 80);
}

void InnerRegionSpace::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rec = boundingRect();
    QBrush brush(Qt::red);
    if(Pressed)
    {
        brush.setColor(Qt::blue);

    }
    else
    {
        brush.setColor(Qt::red);
    }

    painter->fillRect(rec, brush);
    painter->drawRect(rec);
}
