#include <ncurses.h>


int main()
{
    initscr();                   
    printw("Hello Luda!\n");  
    refresh();                   
    getch();                    
    endwin();                    
    return 0;
}
