#ifndef HEALTH_H
#define HEALTH_H

#include <QGraphicsTextItem>
#include <QGraphicsItem>

class Health: public QGraphicsTextItem
{
public:
    Health(QGraphicsItem* parent = nullptr);
    void decrement();
    void print();
    int get();
private:
    int health_;
};

#endif // HEALTH_H
