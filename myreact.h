#ifndef MYREACT_H
#define MYREACT_H

#include <QGraphicsRectItem>
#include <QKeyEvent>

class MyReact: public QGraphicsRectItem
{
public:
    void keyPressEvent(QKeyEvent *event);
    MyReact();
    MyReact(int width, int height);
private:
    void setProperties();
};

#endif // MYREACT_H
