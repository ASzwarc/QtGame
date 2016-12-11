#ifndef MYREACT_H
#define MYREACT_H

#include <QGraphicsRectItem>
#include <QKeyEvent>

class MyReact: public QGraphicsRectItem
{
public:
    void keyPressEvent(QKeyEvent *event);
    MyReact();
};

#endif // MYREACT_H
