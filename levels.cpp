#include "levels.h"

levels::levels(QString bgadd, QString objadd,QString doadd, QString neadd, int number)
{
    this->bgadd = bgadd;
    this->objadd = objadd;

    if(doadd!=0)
        this->doadd = doadd;

    if(neadd!=0)
        this->neadd = neadd;

    this->number = number;

}

