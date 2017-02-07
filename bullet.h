#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsRectItem>
#include <QObject>

#include "score.h"

class Bullet: public QObject, public QGraphicsRectItem
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
