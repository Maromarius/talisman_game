#include "Space.h"

Space::Space()
{

}

Space::Space(int x, int y)
{
    int StartX = x;
    int StartY = y;

    setPos(mapToParent(StartX, StartY));
}

QRectF Space::boundingRect() const
{
    return QRect(0, 0, 80, 80);
}

void Space::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rec = boundingRect();
    QBrush brush(Qt::black);
    painter->fillRect(rec, brush);
    painter->drawRect(rec);
}
