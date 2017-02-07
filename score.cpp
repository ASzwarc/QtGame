#include "score.h"

Score::Score(QGraphicsItem *parent):
    QGraphicsTextItem(parent)
{
    score_ = 0;
    print();
}

int Score::get()
{
    return score_;
}

void Score::print()
{
    setPlainText(QString("Score: ") + QString::number(score_));
}

void Score::increment()
{
    score_++;
}
