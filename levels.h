#ifndef LEVELS_H
#define LEVELS_H
#include <QString>
#include "negahban.h"
#include "dozd.h"

class levels
{
public:
    levels(QString bgadd, QString objadd, QString doadd, QString neadd,int number);
    QString bgadd;//background address
    QString objadd;//object address
    QString doadd;//dozd address for update
    QString neadd;//negahban address
    int number;//the number of level
};

#endif // LEVELS_H
