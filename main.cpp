#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>

#include <memory>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    std::shared_ptr<QGraphicsScene> scene = std::make_shared<QGraphicsScene>();
    auto rectItem = std::make_shared<QGraphicsRectItem>();
    rectItem->setRect(0, 0, 40, 50);
    scene->addItem(rectItem.get());

    std::shared_ptr<QGraphicsView> view = std::make_shared<QGraphicsView>(scene.get());
    view->show();
    return a.exec();
}
