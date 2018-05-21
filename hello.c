#include <ncurses.h>


int main()
{
    initscr();                   
    printw("Hello darlin!\n");  
    refresh();                   
    getch();                    
    endwin();                    
    return 0;
}
