#ifndef MYREACT_H
#define MYREACT_H

#include <QGraphicsPixmapItem>
#include <QKeyEvent>
#include "score.h"

class MyReact: public QGraphicsPixmapItem
{
public:
    void keyPressEvent(QKeyEvent *event);
    MyReact();
    MyReact(Score* score);
    int getHeight();
    int getWidth();
private:
    void setProperties();
    Score* score_;
    QPixmap pixmap_;
};

#endif // MYREACT_H
