#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsRectItem>
#include "dozd.h"
#include "negahban.h"
#include "levels.h"
class game:public QGraphicsView
{
public:
    game(QWidget * parent=0);
    QGraphicsScene * scene;
    dozd * player;
    levels * level1;
    levels * level2;


};

#endif // GAME_H
