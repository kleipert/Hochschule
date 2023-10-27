#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "params.h"
#include "snake_hilfsfunktionen.h"


char board[BOARD_HEIGHT][BOARD_WIDTH];
int snake_x = BOARD_WIDTH/2;
int snake_y = BOARD_HEIGHT/2;

void InitWalls()
{
    for (int i = 0; i < BOARD_HEIGHT; ++i)
    {
        for (int j = 0; j < BOARD_WIDTH; ++j)
        {
            if(i == 0 || i == BOARD_HEIGHT-1)
                board[i][j] = WALL;
            else
            {
                if(j > 0 && j < BOARD_WIDTH-1)
                    board[i][j] = SPACE;
                else
                    board[i][j] = WALL;
            }
        }
    }
}

void PlaceFood(int amount)
{
    for (int i = 0; i < amount; ++i)
    {
        int height = rand() % (BOARD_HEIGHT - 2) + 1;
        int width = rand() % (BOARD_WIDTH - 2) + 1;
        board[height][width] = FOOD;
    }
}

void InitBoard()
{
    InitWalls();
    PlaceFood(FOOD_PER_SPAWN);
    board[snake_y][snake_x] = SNAKE;
}

void PrintBoard()
{
    printf("\n");
    for (int i = 0; i < BOARD_HEIGHT; ++i)
    {
        for (int j = 0; j < BOARD_WIDTH; ++j)
        {
            printf("%c", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    srand(time(NULL));
    InitBoard();
    while(1)
    {
        clear();
        PrintBoard();
        if(kbhit())
        {
            board[snake_y][snake_x] = SPACE;
            char input = getchar();
            switch(input)
            {
                case 'i':
                    if(snake_y - 1 > 0)
                        snake_y--;
                    break;
                case 'k':
                    if(snake_y + 1 < BOARD_HEIGHT-1)
                        snake_y++;
                    break;
                case 'j':
                    if(snake_x - 1 > 0)
                        snake_x--;
                    break;
                case 'l':
                    if(snake_x + 1 < BOARD_WIDTH-1)
                        snake_x++;
                    break;
            }
            board[snake_y][snake_x] = SNAKE;
        }
        mssleep(500);
    }
    return 0;
}
