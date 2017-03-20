#ifndef ENEMY_H
#define ENEMY_H

#include <QGraphicsPixmapItem>
#include <QObject>

#include "health.h"

class Enemy : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    explicit Enemy(QObject *parent = nullptr, Health* health = nullptr);
    inline int getHeight();
    inline int getWidth();
public slots:
    void move();
private:
    Health* health_;
    QPixmap pixmap_;
};

#endif // ENEMY_H
