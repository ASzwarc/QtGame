#include "enemy.h"
#include <cstdlib>

Enemy::Enemy(QObject *parent) : QObject(parent)
{
    setPos(rand() % 750, 0);
    setRect(0, 0, 30, 20);
    QTimer* timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));
    timer->start(100);
}

void Enemy::move()
{
    setPos(x(), y() + 5);
}
