#ifndef GAME_H
#define GAME_H

#include <myreact.h>

#include <QGraphicsView>
#include <QObject>
#include <memory>

class Game : public QObject
{
    Q_OBJECT
public:
    Game();
    void setupElements();
public slots:
    void setupEnemies();
private:
    void spawnEnemies();
    void setupStatusObjects();

    std::shared_ptr<QGraphicsView> view_;
    QGraphicsScene* scene_;
    MyReact* player_;
    int width_{800};
    int height_{600};
};

#endif // GAME_H
