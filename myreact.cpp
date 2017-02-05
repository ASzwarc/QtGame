#include "myreact.h"
#include "bullet.h"
#include <QDebug>
#include <QKeyEvent>
#include <QGraphicsScene>

void MyReact::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Left)
    {
        if (pos().x() > 0)
        {
            setPos(x() - 10, y());
        }
    }
    else if (event->key() == Qt::Key_Right)
    {
        if (pos().x() + 48 < 800)
        {
            setPos(x() + 10, y());
        }
    }
    else if (event->key() == Qt::Key_Space)
    {
        Bullet* bullet = new Bullet();
        bullet->setPos(x(), y());
        scene()->addItem(bullet);
    }
    else
    {
        qDebug() << "Key is not supported!!!";
    }
}

MyReact::MyReact()
{

}
