#include <ncurses.h>

int main() {
    initscr();            // Initialize ncurses mode
    cbreak();             // Disable line buffering
    keypad(stdscr, TRUE); // Enable arrow keys
    noecho();             // Disable echoing of characters
    
    int ch;
    printw("Press an arrow key to move the cursor, or 'q' to quit.\n");
    while ((ch = getch()) != 'q') {
        switch (ch) {
            case KEY_UP:
                printw("Up arrow pressed\n");
                break;
            case KEY_DOWN:
                printw("Down arrow pressed\n");
                break;
            case KEY_LEFT:
                printw("Left arrow pressed\n");
                break;
            case KEY_RIGHT:
                printw("Right arrow pressed\n");
                break;
            default:
                printw("Other key pressed\n");
                break;
        }
    }
    
    endwin(); // End ncurses mode
    return 0;
}
