#include "score.h"
#include <QFont>

Score::Score(QGraphicsItem *parent):
    QGraphicsTextItem(parent)
{
    score_ = 0;
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times", 16));
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
    print();
}
