#ifndef GAME_H
#define GAME_H

#include "myreact.h"
#include "health.h"
#include "score.h"
#include <QGraphicsView>
#include <QObject>
#include <memory>

class Game : public QObject
{
    Q_OBJECT
public:
    Game();
    void setupElements();
private slots:
    void setupEnemies();
private:
    void spawnEnemies();
    void setupPlayer();
    void setupStatusObjects();

    std::shared_ptr<QGraphicsView> view_;
    QGraphicsScene* scene_;
    MyReact* player_;
    Health* health_;
    Score* score_;
    int width_{800};
    int height_{600};
};

#endif // GAME_H
