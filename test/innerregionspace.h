#ifndef INNERREGIONSPACE_H
#define INNERREGIONSPACE_H
#include "space.h"

class InnerRegionSpace : public Space{

public:
    InnerRegionSpace();
    InnerRegionSpace(int, int);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};
#endif // INNERREGIONSPACE_H
