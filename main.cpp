#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "myreact.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene* scene = new QGraphicsScene();
    MyReact* rectItem = new MyReact();
    rectItem->setRect(0, 0, 40, 50);
    scene->addItem(rectItem);

    rectItem->setFlag(QGraphicsItem::ItemIsFocusable);
    rectItem->setFocus();

    QGraphicsView* view = new QGraphicsView(scene);

    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    view->show();
    return a.exec();
}
