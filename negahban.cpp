#include "negahban.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include "dozd.h"
#include <QDebug>
#include "levels.h"
bool f = true;
bool g = true;
bool h = false;
void move1(negahban *n)
{
    if(n->getx()>0 && f)
    {
        n->setPos(n->getx()-10,n->gety());
    }
    else
    {
        f=false;
        if(n->gety()<20 && g){
        n->setPos(n->getx(),n->gety()+6);
        qDebug() << n->getx();
        }
    }
    if(n->gety()>20 && !h)
    {
        g=false;
        n->setPos(n->getx()+4,n->gety());
        if(n->getx()>150)
            h=true;

    }
    else if(h)
    {
        n->setPos(n->getx(),n->gety()-10);
        if(n->gety()<-200)
        {
            n->setPos(n->getx()+10,n->gety()-10);
        }
    }
}
negahban::negahban()
{
    QTimer * timer = new QTimer();

    rotation=0;
    this->setPos(100,-560);

    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(30);
}

void negahban::move()
{
    move1(this);
    QList<QGraphicsItem*> colliding_items = collidingItems();
    for(int i=0,n=colliding_items.size();i<n;++i){
        if(typeid(*(colliding_items[i])) == typeid(dozd))
            qDebug() << "the end...";//Game over
    }

}


