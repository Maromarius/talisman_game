#include "MiddleRegionSpace.h"

MiddleRegionSpace::MiddleRegionSpace()
{

}

MiddleRegionSpace::MiddleRegionSpace(int x, int y)
{
    int StartX = x;
    int StartY = y;

    setPos(mapToParent(StartX, StartY));
}

QRectF MiddleRegionSpace::boundingRect() const
{
    return QRect(0, 0, 80, 80);
}

void MiddleRegionSpace::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rec = boundingRect();
    QBrush brush(Qt::yellow);
    painter->fillRect(rec, brush);
    painter->drawRect(rec);
}
