#ifndef ATIGHE_H
#define ATIGHE_H
#include <QGraphicsPixmapItem>

class atighe:public QGraphicsPixmapItem
{
public:
    atighe();
    int x;
    int y;
    void setpos(int,int);
};

#endif // ATIGHE_H
