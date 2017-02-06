#include "game.h"
#include <QGraphicsScene>
#include "myreact.h"

Game::Game()
{

}

void Game::setupElements()
{
    QGraphicsScene* scene = new QGraphicsScene();
    view_ = std::make_shared<QGraphicsView>(scene);

    view_->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view_->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    view_->show();
    view_->setFixedSize(width_, height_);
    scene->setSceneRect(0, 0, width_, height_);

    MyReact* rectItem = new MyReact(40, 50);
    scene->addItem(rectItem);
    rectItem->setPos(view_->width() / 2, view_->height() - rectItem->rect().height());
}
