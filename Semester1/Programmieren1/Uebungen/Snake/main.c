#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "params.h"
#include "snake_hilfsfunktionen.h"


char board[BOARD_HEIGHT][BOARD_WIDTH];
int snake_x = BOARD_WIDTH/2;
int snake_y = BOARD_HEIGHT/2;
int snake_move_x = 1;
int snake_move_y = 0;

void InitBorder()
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

int* GetRandomPosition(int* result)
{
    int height = rand() % (BOARD_HEIGHT - 2) + 1;
    int width = rand() % (BOARD_WIDTH - 2) + 1;
    result[0] = height;
    result[1] = width;
    return result;
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

void PlaceWalls(int x, int y, int amount)
{
    int randomPos[2];
    for (int i = 0; i < amount; ++i)
    {
        GetRandomPosition(randomPos);

        for (int j = 0; j < WALLS_LENGTH; ++j)
        {
            int final_x = randomPos[1];
            int final_y = randomPos[0];

            if(x == 1)
                final_x += j;
            if(x == -1)
                final_x -= j;
            if(y == 1)
                final_y += j;

            if(final_y <= BOARD_HEIGHT - 1 && final_x <= BOARD_WIDTH - 1)
                board[final_y][final_x] = WALL;
        }
    }
}


void PlaceRandomWalls()
{
    PlaceWalls(0,1, VERTICAL_WALLS);
    PlaceWalls(1,0, HORIZONTAL_WALLS);
    PlaceWalls(1,1, DIAGONAL_WALLS);
    PlaceWalls(-1,1, DIAGONAL_WALLS);
}

void InitBoard()
{
    InitBorder();
    PlaceRandomWalls();
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

void UpdateSnakeMovement(int x, int y)
{
    if(!(snake_move_y == -1 && y == 1) && !(snake_move_y == 1 && y == -1))
        snake_move_y = y;
    if(!(snake_move_x == -1 && x == 1) && !(snake_move_x == 1 && x == -1))
        snake_move_x = x;
}

void Move()
{
    if(snake_move_y == 1 && (snake_y + snake_move_y < BOARD_HEIGHT - 1))
        snake_y += snake_move_y;

    if(snake_move_y == -1 && snake_y > 1)
        snake_y += snake_move_y;

    if(snake_move_x == 1 && (snake_x + snake_move_x < BOARD_WIDTH - 1))
        snake_x += snake_move_x;

    if(snake_move_x == -1 && snake_x > 1)
        snake_x += snake_move_x;
}

int main()
{
    srand(time(NULL));
    InitBoard();
    while(1)
    {
        clear();
        PrintBoard();
        board[snake_y][snake_x] = SPACE;
        if(kbhit())
        {
            char input = getchar();
            switch(input)
            {
                case 'i':
                    UpdateSnakeMovement(0,-1);
                    break;
                case 'k':
                    UpdateSnakeMovement(0,1);
                    break;
                case 'j':
                    UpdateSnakeMovement(-1,0);
                    break;
                case 'l':
                    UpdateSnakeMovement(1,0);
                    break;
            }
        }
        Move();
        board[snake_y][snake_x] = SNAKE;
        mssleep(100);
    }
    return 0;
}
