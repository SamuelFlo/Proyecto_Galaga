#include "enemigos.h"
#include <iostream>
#include <ncurses.h>
using namespace std;
Enemigos::Enemigos(){}

Enemigos::Enemigos(int x1, int y1){
  
  this->x=x1;
  this->y=y1;
  start_color();

  init_pair(1,COLOR_WHITE,COLOR_WHITE);
	init_pair(2,COLOR_BLACK,COLOR_BLACK);
	init_pair(3,COLOR_RED,COLOR_RED);

  //cuerpo1
  attron(COLOR_PAIR(1));
  move(x,y);
  printw(" ");
  attron(COLOR_PAIR(3));
  move(x,y+1);
  printw(" ");
  attron(COLOR_PAIR(1));
  move(x,y+2);
  printw(" ");
  attron(COLOR_PAIR(3));
  move(x,y+3);
  printw(" ");
  attron(COLOR_PAIR(1));
  move(x,y+4);
  printw(" ");
  //cuerpo2
  attron(COLOR_PAIR(1));
  move(x+1,y+1);
  printw(" ");
  attron(COLOR_PAIR(1));
  move(x+1,y+2);
  printw(" ");
  attron(COLOR_PAIR(1));
  move(x+1,y+3);
  printw(" ");
  //cabeza
  attron(COLOR_PAIR(1));
  move(x+2,y+2);
  printw(" ");
}
