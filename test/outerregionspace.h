#ifndef OUTERREGIONSPACE_H
#define OUTERREGIONSPACE_H

#include "space.h"

class OuterRegionSpace : public Space{

public:
    OuterRegionSpace();
    OuterRegionSpace(int, int);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif
