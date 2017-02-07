#ifndef ENEMY_H
#define ENEMY_H

#include <QGraphicsRectItem>
#include <QObject>

#include "health.h"

class Enemy : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    explicit Enemy(QObject *parent = nullptr, Health* health = nullptr);

public slots:
    void move();
private:
    Health* health_;
};

#endif // ENEMY_H
