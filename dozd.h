#ifndef DOZD
#define DOZD
#include <QGraphicsPixmapItem>
#include "atighe.h"


class dozd: public QGraphicsPixmapItem{
public:
    int xh;
    int yh;
    void setHadaf(int,int);
    void keyPressEvent(QKeyEvent * event);
    bool hadaf;
    atighe  * at;
};

#endif // DOZD

