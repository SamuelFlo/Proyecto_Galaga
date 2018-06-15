#include <iostream>
#include <ncurses.h>
#include <vector>
#include "enemigos.h"
#include <unistd.h>

using namespace std;
vector<Enemigos*>enemigo;
void llenarenemigos(){
	int x=4, y=10;
	for(int i=0; i <30;i++){
		Enemigos* ene=new Enemigos(x,y);
		y+=10;
		if(i==10){
			x+=4;
			y=10;
		}else if(i==21){
			x+=4;
			y=25;
		}


	}

}
int main(int argc,char*argv[]){
	int x=34;
	int y=34;
	int tx=0;
	int ty=0;
	char mover;
	bool seguir=true;
	initscr();

	start_color();
	init_pair(1,COLOR_WHITE,COLOR_WHITE);
	init_pair(2,COLOR_BLACK,COLOR_BLACK);
	init_pair(3,COLOR_CYAN,COLOR_CYAN);
	llenarenemigos();
	while(seguir){
		tx=x;
		ty=y;
		attron(COLOR_PAIR(3));
		move(x,y);
		printw(" ");
		//cuerpo
		attron(COLOR_PAIR(1));
		move(x+1,y);
		printw(" ");
		attron(COLOR_PAIR(1));
		move(x+1,y+1);
		printw(" ");
		attron(COLOR_PAIR(1));
		move(x+1,y+2);
		printw(" ");
		attron(COLOR_PAIR(1));
		move(x+1,y+3);
		printw(" ");
		attron(COLOR_PAIR(1));
		move(x+1,y+4);
		printw(" ");
		attron(COLOR_PAIR(1));
		move(x+1,y+5);
		printw(" ");
		attron(COLOR_PAIR(1));
		move(x+1,y+6);
		printw(" ");
		//cuerpo2
		attron(COLOR_PAIR(1));
		move(x+2,y);
		printw(" ");
		attron(COLOR_PAIR(2));
		move(x+2,y+1);
		printw(" ");
		attron(COLOR_PAIR(2));
		move(x+2,y+2);
		printw(" ");
		attron(COLOR_PAIR(1));
		move(x+2,y+3);
		printw(" ");
		attron(COLOR_PAIR(2));
		move(x+2,y+4);
		printw(" ");
		attron(COLOR_PAIR(2));
		move(x+2,y+5);
		printw(" ");
		attron(COLOR_PAIR(1));
		move(x+2,y+6);
		printw(" ");
		//cuerpo3
		attron(COLOR_PAIR(1));
		move(x,y);
		printw(" ");
		attron(COLOR_PAIR(2));
		move(x,y+1);
		printw(" ");
		attron(COLOR_PAIR(3));
		move(x,y+2);
		printw(" ");
		attron(COLOR_PAIR(1));
		move(x,y+3);
		printw(" ");
		attron(COLOR_PAIR(3));
		move(x,y+4);
		printw(" ");
		attron(COLOR_PAIR(2));
		move(x,y+5);
		printw(" ");
		attron(COLOR_PAIR(1));
		move(x,y+6);
		printw(" ");
		//cabeza
		attron(COLOR_PAIR(1));
		move(x-1,y+3);
		printw(" ");
		attron(COLOR_PAIR(1));
		move(x-2,y+3);
		printw(" ");
		attron(COLOR_PAIR(1));
		move(x-3,y+3);
		printw(" ");
		mover = getch();
		if(mover=='f'){
			seguir=false;

		}else if((mover=='a')&&(ty>0)){
			//cuerpo1
			attron(COLOR_PAIR(2));
			move(tx+1,ty);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx+1,ty+1);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx+1,ty+2);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx+1,ty+3);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx+1,ty+4);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx+1,ty+5);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx+1,ty+6);
			printw("        ");
			//cuerpo2
			attron(COLOR_PAIR(2));
			move(tx+2,ty);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx+2,ty+1);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx+2,ty+2);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx+2,ty+3);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx+2,ty+4);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx+2,ty+5);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx+2,ty+6);
			printw("        ");
			//cuerpo3
			attron(COLOR_PAIR(2));
			move(tx,ty);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx,ty+1);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx,ty+2);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx,ty+3);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx,ty+4);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx,ty+5);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx,ty+6);
			printw("        ");
			//cabeza
			attron(COLOR_PAIR(2));
			move(tx-1,ty+3);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx-2,ty+3);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx-3,ty+3);
			printw("        ");
			y--;
		}else if((mover=='d')&&(ty<143)){
			//cuerpo1
			attron(COLOR_PAIR(2));
			move(tx+1,ty);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx+1,ty+1);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx+1,ty+2);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx+1,ty+3);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx+1,ty+4);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx+1,ty+5);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx+1,ty+6);
			printw("        ");
			//cuerpo2
			attron(COLOR_PAIR(2));
			move(tx+2,ty);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx+2,ty+1);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx+2,ty+2);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx+2,ty+3);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx+2,ty+4);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx+2,ty+5);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx+2,ty+6);
			printw("        ");
			//cuerpo3
			attron(COLOR_PAIR(2));
			move(tx,ty);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx,ty+1);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx,ty+2);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx,ty+3);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx,ty+4);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx,ty+5);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx,ty+6);
			printw("        ");
			//cabeza
			attron(COLOR_PAIR(2));
			move(tx-1,ty+3);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx-2,ty+3);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx-3,ty+3);
			printw("        ");
			/*attron(COLOR_PAIR(2));
			move(tx,ty);
			printw("        ");
			attron(COLOR_PAIR(2));
			move(tx+1,y);
			printw("         ");*/

			y++;

		}else if(mover==32){
			for(int i=tx-2;i>=0;i--){
				attron(COLOR_PAIR(1));
				move(i,ty+2);
				printw(" ");
				attron(COLOR_PAIR(2));
				move(i,ty+2);
				printw(" ");
				usleep(4000);
				refresh();
				if(i==0){
					attron(COLOR_PAIR(2));
					move(0,ty-3);
					printw("           ");

				}
			}
		}
		refresh();
		endwin();

	}
}
