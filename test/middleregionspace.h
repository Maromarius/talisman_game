#ifndef MIDDLEREGIONSPACE_H
#define MIDDLEREGIONSPACE_H

#include "space.h"

class MiddleRegionSpace : public Space{

public:
    MiddleRegionSpace();
    MiddleRegionSpace(int, int);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif
