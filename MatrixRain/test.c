#include <ncurses.h>
#include <unistd.h>

#define DELAY 300 //speed of ball mooving

int main(int argc, char *argv[]) {
 int x = 0, y = 0;
 int max_y = 0, max_x = 0;
 int next_x = 0;
 int direction = 1;

 initscr();
 noecho();
 curs_set(FALSE);

 // Global var `stdscr` is created by the call to `initscr()`
 getmaxyx(stdscr, max_y, max_x);//to get the dimensions of 
 //the screen and add some simple collision detection logic for great justice

 while(1) {
 clear();
 mvprintw(y, x, "o");//basic drawing algoritm 
 refresh();

 usleep(DELAY);

 next_x = x + direction;//next step of ball mooving by x

 if (next_x >= max_x || next_x < 0) {//algoritm to move ball
 direction*= -1;
 } else {
 x+= direction;
 }
 }

 endwin();
}

/*TESTING BALL MOVING RIGHT
#include <ncurses.h>
#include <unistd.h>

#define DELAY 30000

int main(int argc, char *argv[]) {
 int x = 0, y = 0;

 initscr();
 noecho();
 curs_set(FALSE);

 while(1) {
 clear(); // Clear the screen of all
 // previously-printed characters
 mvprintw(y, x, "o"); // Print our "ball" at the current xy position
 refresh();

 usleep(DELAY); // Shorter delay between movements
 x++; // Advance the ball to the right
 }

 endwin();
}*/

/* TESTING HOW TO WRITE HELLO WRLD
#include <ncurses.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

 initscr(); // Initialize the window
 noecho(); // Don't echo any keypresses
 curs_set(FALSE); // Don't display a cursor

 mvprintw(0, 0, "Hello, world!");
 refresh();//Since characters are buffered before they're 
 //displayed on the screen, you need to refresh 
 //the window to see them.

 sleep(1);

 endwin();
}*/
