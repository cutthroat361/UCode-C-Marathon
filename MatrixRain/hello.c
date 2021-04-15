#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

void delay(){
long double i = 0;
for(;i < 10000000; i++);
}

int main(){
	srand(time(NULL));
	char ch = 'a' + rand() % 26;
	int row, col;
	
	initscr();
	curs_set(0);
	if(has_colors() == FALSE){
		endwin();
		printf("Your terminal does not support color\n");
		exit(1);
	}
	start_color();
	init_pair(1, COLOR_GREEN, COLOR_BLACK);
	init_pair(2, COLOR_BLACK, COLOR_BLACK);
	init_pair(3, COLOR_WHITE, COLOR_BLACK);

	getmaxyx(stdscr, row, col);
	
	attron(COLOR_PAIR(1));
/*	
	char *str1 = "Wake up Neo";
	char *str2 = "The Matrix has you";
	char *str3 = "Follow the white rabbit";
	char *str4 = "Knock, knock, Neo";
	move(5, 5);
	for(int sortstr = 0; str1[sortstr] != '\0'; sortstr++){
		delay();
		delay();
		addch(str1[sortstr]);
		refresh();
		}
	clear();
	sleep(1);
	move(5, 5);
	for(int sortstr = 0; str2[sortstr] != '\0'; sortstr++){
		delay();
		delay();
		addch(str2[sortstr]);
		refresh();
		}
	clear();
	sleep(1);
	move(5, 5);
	for(int sortstr = 0; str3[sortstr] != '\0'; sortstr++){
		delay();
		delay();
		addch(str3[sortstr]);
		refresh();
		}
	clear();
	sleep(1);
	move(5, 5);
	for(int sortstr = 0; str4[sortstr] != '\0'; sortstr++){
		delay();
		delay();
		addch(str4[sortstr]);
		refresh();
		}
	clear();
	sleep(1);
	*/
/*	for(int sortc = 0; sortc <= col; sortc++){
		for(int sortr = 0; sortr <= row; sortr ++){
			attron(COLOR_PAIR(1));
			ch = 33 + rand() % 95;
			mvaddch (sortr, sortc, ch | A_INVIS);
		}
	}*/
	//int start = 0;
	//while (row > 0){
	/*for(int sortc = 0; sortc <= col; sortc++){
		for(int sortr = 0; sortr <= row; sortr ++){
			attron(COLOR_PAIR(1));
			ch = 33 + rand() % 95;
			mvaddch (sortr, sortc, ch | A_INVIS);
		}
	}*/
			
		//int drop[col];
		//for (int x = 0; x < col; x ++){
		//drop[x] = rand() % row / 2;
		int dlinna =rand() % row;
		for (int x = 0; x <= row; x++){
			for (int sortc = 0; sortc < col; sortc ++){
				for (int i = 0; i < row; i++){
					if (sortc % 1 == 0){
								ch = 33 + rand() % 89;
								i=i+dlinna;
								if (i==x){
								mvaddch(i, sortc, ch | COLOR_PAIR(3));
								for (;dlinna!=0;dlinna--)
								{
									mvaddch(i-dlinna, sortc, ch | COLOR_PAIR(1));
								}
								
								//mvaddch(i-dlinna, sortc, ch | COLOR_PAIR(1));
								}else
								{
									mvaddch(i, sortc, ch | COLOR_PAIR(2));
								}
								//mvaddch(i, sortc, ch | COLOR_PAIR(3));
						}
					else{
							ch = 33 + rand() % 95;
							mvaddch(i, sortc, ch | COLOR_PAIR(2));
					}	
					
				}
			}
			delay();
		delay();
		refresh();
		}
	
	//start ++;
	//}
		
	getch();
	endwin();

	return 0;
}
