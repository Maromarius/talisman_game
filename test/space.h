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
    virtual QRectF boundingRect() const = 0;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) = 0;
    bool Pressed;
    bool canMoveHere;
    bool isHere;
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
};

#endif
