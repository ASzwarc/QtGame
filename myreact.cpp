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
        if (pos().x() + getWidth() < 800)
        {
            setPos(x() + 10, y());
        }
    }
    else if (event->key() == Qt::Key_Space)
    {
        Bullet* bullet = new Bullet(score_);
        bullet->setPos(x(), y());
        scene()->addItem(bullet);
    }
    else
    {
        qDebug() << "Key is not supported!!!";
    }
}

MyReact::MyReact():
    score_(nullptr),
    pixmap_(QPixmap(":/images/player.png"))
{
    setPixmap(pixmap_);
    setProperties();
}

MyReact::MyReact(Score *score):
    score_(score),
    pixmap_(QPixmap(":/images/player.png"))
{
    setPixmap(pixmap_);
    setProperties();
}

int MyReact::getHeight()
{
    return pixmap_.rect().height();
}

int MyReact::getWidth()
{
    return pixmap_.rect().width();
}

void MyReact::setProperties()
{
    setFlag(QGraphicsItem::ItemIsFocusable);
    setFocus();
}
