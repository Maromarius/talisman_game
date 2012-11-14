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

void Space::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    Pressed =  !Pressed;
    update();
    QGraphicsItem::mousePressEvent(event);

}
