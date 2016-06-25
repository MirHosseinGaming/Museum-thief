#ifndef NEGAHBAN
#define NEGAHBAN
#include <QObject>
#include <QGraphicsPixmapItem>
class negahban : public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    negahban();
    double rotation;//zavie dide negahban
    int getx()
    {
        return this->pos().x();
    }
    int gety()
    {
        return this->pos().y();
    }
public slots:
    void move();
};

#endif // NEGAHBAN

