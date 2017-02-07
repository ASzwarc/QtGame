#include "game.h"
#include "enemy.h"
#include "health.h"
#include "score.h"

#include <QGraphicsScene>
#include <QTimer>

Game::Game()
{
    scene_ = new QGraphicsScene();
    view_ = std::make_shared<QGraphicsView>(scene_);
    score_ = new Score();
    player_ = new MyReact(40, 50, score_);
    health_ = new Health();

}

void Game::setupElements()
{
    view_->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view_->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    view_->show();
    view_->setFixedSize(width_, height_);
    scene_->setSceneRect(0, 0, width_, height_);

    setupPlayer();
    setupStatusObjects();
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
    Enemy* newEnemy = new Enemy(nullptr, health_);
    scene_->addItem(newEnemy);
}

void Game::setupPlayer()
{
    scene_->addItem(player_);
    player_->setPos(view_->width() / 2, view_->height() - player_->rect().height());
}

void Game::setupStatusObjects()
{
    scene_->addItem(health_);
    health_->setPos(health_->x(), health_->y() + 25);
    scene_->addItem(score_);
}
