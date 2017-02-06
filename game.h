#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <memory>

class Game
{
public:
    Game();
    void setupElements();
private:
    std::shared_ptr<QGraphicsView> view_;
    int width_{800};
    int height_{600};
};

#endif // GAME_H
