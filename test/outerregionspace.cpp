#include "OuterRegionSpace.h"

OuterRegionSpace::OuterRegionSpace()
{

}

OuterRegionSpace::OuterRegionSpace(int x, int y)
{
    int StartX = x;
    int StartY = y;

    setPos(mapToParent(StartX, StartY));
}

QRectF OuterRegionSpace::boundingRect() const
{
    return QRect(0, 0, 80, 80);
}

void OuterRegionSpace::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rec = boundingRect();
    QBrush brush(Qt::green);
    painter->fillRect(rec, brush);
    painter->drawRect(rec);
}
