#include "OuterRegionSpace.h"

OuterRegionSpace::OuterRegionSpace()
{

}

OuterRegionSpace::OuterRegionSpace(int x, int y)
{
    int StartX = x;
    int StartY = y;
    canMoveHere = false;
    Pressed = false;
    isHere = false;
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
    if(canMoveHere)
    {
        brush.setColor(Qt::blue);
        if(Pressed)
        {
            canMoveHere = false;
            Pressed = false;
            isHere = true;
            brush.setColor(Qt::red);
        }
    }
    else if(isHere)
    {
         brush.setColor(Qt::red);
    }
    else
    {
        brush.setColor(Qt::green);
    }

    painter->fillRect(rec, brush);
    painter->drawRect(rec);
    update();
}


