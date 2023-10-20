#include <sys/ioctl.h>
#include <stdio.h>
#include <curses.h>

int main (void)
{
    // init curses:
    initscr();
    struct winsize w;
    ioctl(0, TIOCGWINSZ, &w);

    int y = w.ws_row;
    int x = w.ws_col;

    int center_y = y/2;
    int center_x = x/2;


    void MoveAndDraw(int x, int y)
    {
        move(y,x);
        addstr("#");
    }

    void DrawRectangle(int offset)
    {
        clear();
        int start_x = center_x - offset;
        int end_x = center_x + offset;
        int start_y = center_y - offset;
        int end_y = center_y + offset;

        int pos_y = start_y;
        int pos_x = start_x;

        while(pos_x <= end_x && pos_y == start_y)
        {
            MoveAndDraw(pos_x, pos_y);
            pos_x++;
        }
        pos_x = start_x;
        pos_y++;
        while(pos_y < end_y)
        {
            MoveAndDraw(start_x, pos_y);
            MoveAndDraw(end_x, pos_y);
            pos_y++;
        }
        pos_x = start_x;
        while(pos_x <= end_x && pos_y == end_y)
        {
            MoveAndDraw(pos_x, pos_y);
            pos_x++;
        }
    }
    for (int i = 1; i < 11; i++)
    {
        DrawRectangle(i);
        refresh();
        napms(100);
        if(i == 10)
            i = 0;
    }
    // end curses:
    endwin();
    return 0;
}