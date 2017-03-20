#include "bullet.h"
#include "enemy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QDebug>

Bullet::Bullet(Score* score):
    score_(score)
{
    setPixmap(QPixmap(":/images/bullet.png"));

    QTimer* timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));
    timer->start(50);
}

void Bullet::move()
{
    setPos(x(), y() - 10);
    if (pos().y() + 100 < 0)
    {
        scene()->removeItem(this);
        qDebug() << "Bullet deleted (out of screen)";
        delete this;
        return;
    }
    QList<QGraphicsItem*> itemsThatCollide = collidingItems();
    for(auto& element: itemsThatCollide)
    {
        if(dynamic_cast<Enemy*>(element))
        {
            scene()->removeItem(element);
            scene()->removeItem(this);
            delete element;
            qDebug() << "Bullet and enemy delted (collision)";
            score_->increment();
            delete this;
            return;
        }
    }
}
