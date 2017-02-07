#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsTextItem>
#include <QGraphicsItem>

class Score: public QGraphicsTextItem
{
public:
    Score(QGraphicsItem* parent = nullptr);
    int get();
    void print();
    void increment();
private:
    int score_;
};

#endif // SCORE_H
