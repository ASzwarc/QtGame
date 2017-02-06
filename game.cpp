#include "game.h"
#include "enemy.h"
#include "myreact.h"

#include <QGraphicsScene>
#include <QTimer>

Game::Game()
{

}

void Game::setupElements()
{
    scene_ = new QGraphicsScene();
    view_ = std::make_shared<QGraphicsView>(scene_);

    view_->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view_->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    view_->show();
    view_->setFixedSize(width_, height_);
    scene_->setSceneRect(0, 0, width_, height_);

    MyReact* rectItem = new MyReact(40, 50);
    scene_->addItem(rectItem);
    rectItem->setPos(view_->width() / 2, view_->height() - rectItem->rect().height());
    spawnEnemies();
}

void Game::spawnEnemies()
{
    QTimer* timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(setupEnemies()));
    timer->start(2000);
}

void Game::setupEnemies()
{
    Enemy* newEnemy = new Enemy();
    scene_->addItem(newEnemy);
}
