#ifndef ENEMIGOS_H
#define ENEMIGOS_H
#include <iostream>
#include <ncurses.h>
using namespace std;

class Enemigos{
  private:
    int x;
    int y;
  public:
    Enemigos();
    Enemigos(int,int);
};
#endif
