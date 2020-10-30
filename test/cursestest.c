#include <ncurses.h>

int main() {
    initscr();
    raw();
    printw("Hello World!");
    getch();
    endwin();
    return 0;
}
