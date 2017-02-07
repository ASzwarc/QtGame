#ifndef MYREACT_H
#define MYREACT_H

#include <QGraphicsRectItem>
#include <QKeyEvent>
#include "score.h"

class MyReact: public QGraphicsRectItem
{
public:
    void keyPressEvent(QKeyEvent *event);
    MyReact();
    MyReact(int width, int height, Score* score);
private:
    void setProperties();
    Score* score_;
};

#endif // MYREACT_H
