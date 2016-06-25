#include <QApplication>
#include "game.h"
#include "levels.h"
game * g;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    g = new game();
    return a.exec();
}
