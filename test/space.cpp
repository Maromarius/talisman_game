#include "Space.h"
#include <iostream>
using namespace std;
Space::Space()
{
        Pressed = false;

}

Space::Space(int x, int y)
{
    Pressed = false;
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
   brush.setColor(Qt::black);
    painter->fillRect(rec, brush);
    painter->drawRect(rec);
}

void Space::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    Pressed =  !Pressed;
    update();
    QGraphicsItem::mousePressEvent(event);

}
