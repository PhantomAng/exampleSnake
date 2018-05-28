#include <ncurses.h>


int main()
{
    initscr();                   
    printw("Hello town!\n");  
    refresh();                   
    getch();                    
    endwin();                    
    return 0;
}
