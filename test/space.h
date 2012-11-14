#ifndef SPACE_H
#define SPACE_H

#include <QPainter>
#include <QGraphicsItem>
#include <QGraphicsScene>

class Space : public QGraphicsItem
{
public:
    Space();
    Space(int, int);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
};

#endif
