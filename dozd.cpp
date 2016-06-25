#include "dozd.h"
#include <QTimer>
#include "game.h"
#include <QKeyEvent>
#include <QDebug>

void dozd::setHadaf(int a, int b)
{
    xh=a;
    yh=b;
}

void dozd::keyPressEvent(QKeyEvent *event){
    if(event->key() == Qt::Key_Left){
        if(pos().x()>0)
        setPos(x()-10,y());

    }
    else if(event->key() == Qt::Key_Right){
        if(pos().x()+100 <1280)
        setPos(x()+10,y());
    }
    else if(event->key() == Qt::Key_Up){
        setPos(x(),y());
        if(pos().y()>0)
        setPos(x(),y()-10);
    }
    else if(event->key() == Qt::Key_Down){
         if(pos().y()+100 <720)
            setPos(x(),y()+10);
    }
    else if(event->key() == Qt::Key_Space){
        if(y()<=40  && x()<=560 && x() >=540 )
            qDebug() <<"win";

    }
}

