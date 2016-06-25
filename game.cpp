#include "game.h"
#include <QBrush>
#include <QImage>
#include "levels.h"
#include "atighe.h"
void setposition1(negahban *n,dozd *d,atighe * a)
{
    n->setPos(300,-560);
    d->setPos(1280-d->pixmap().width(),720-d->pixmap().height());
    a->setPos(560,20);
    a->setpos(a->pos().x(),a->pos().y());
}

game::game(QWidget * )
{
    scene = new QGraphicsScene(); //create a scene

    player = new dozd(); //create an item

    level1 = new levels(":/images/bg.jpg","://images/object.png","://images/arrow.png","://images/police.png",1);


    player->setPixmap(QPixmap(level1->doadd));

    scene->addItem(player); //add the item to the scene

    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus(); //make the rect focusable

    QGraphicsView * view = new QGraphicsView(scene); //add a view

    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff); //lock the scroll bar

    view->show(); //show the view
    view->setFixedSize(1280,720);
    scene->setSceneRect(0,0,1280,720);

    scene->setBackgroundBrush(QBrush(QImage(level1->bgadd)));

    negahban * n = new negahban();
    n->setPixmap(QPixmap(level1->neadd));

    atighe * antic = new atighe();
    antic->setPixmap(level1->objadd);

    setposition1(n,player,antic);

    player->setHadaf(antic->x,antic->y);

    scene->addItem(n);
    scene->addItem(antic);
}

