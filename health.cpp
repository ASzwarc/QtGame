#include "health.h"
#include <QFont>

Health::Health(QGraphicsItem *parent):
    QGraphicsTextItem(parent)
{
    health_ = 4;
    setDefaultTextColor(Qt::red);
    setFont(QFont("times", 16));
    print();
}

void Health::decrement()
{
    if (health_ > 0)
    {
        health_--;
        print();
    }
}

void Health::print()
{
    setPlainText(QString("Health: ") + QString::number(health_));
}
