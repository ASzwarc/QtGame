#include "enemy.h"
#include <cstdlib>
#include <QDebug>
#include <QTimer>
#include <QGraphicsScene>

Enemy::Enemy(QObject *parent, Health* health):
    QObject(parent),
    health_(health),
    pixmap_(QPixmap(":/images/alien_spaceship.png"))
{
    setPos(rand() % 750, 0);
    setPixmap(pixmap_);
    QTimer* timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));
    timer->start(100);
}

int inline Enemy::getHeight()
{
    return pixmap_.rect().height();
}

int inline Enemy::getWidth()
{
    return pixmap_.rect().width();
}

void Enemy::move()
{
    setPos(x(), y() + 5);
    if (pos().y() + getHeight() > 600)
    {
        qDebug() << "Enemy deleted (out of screen)";
        health_->decrement();
        scene()->removeItem(this);
        delete this;
        return;
    }
}
