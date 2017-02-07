#include "health.h"

Health::Health(QGraphicsItem *parent):
    QGraphicsTextItem(parent)
{
    health_ = 0;
    print();
}

void Health::increment()
{
    health_++;
}

void Health::print()
{
    setPlainText(QString("Health: ") + QString::number(health_));
}
