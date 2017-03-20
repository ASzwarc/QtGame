#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsPixmapItem>
#include <QObject>

#include "score.h"

class Bullet: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT

public:
    Bullet(Score* score);

public slots:
    void move();
private:
    Score* score_;
};

#endif // BULLET_H
