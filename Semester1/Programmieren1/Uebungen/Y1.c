#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init_board(int board[30][150])
{
    for (int row = 0; row < 30; ++row)
    {
        for (int col = 0; col < 150; ++col)
        {
            if(row == 0 || row == 29)
            {
                board[row][col] = 1;
                continue;
            }
            if(col == 0 || col == 149){
                board[row][col] = 1;
                continue;
            }
            board[row][col] = 0;
        }
    }
}

void place_block(int board[30][150])
{
    int rnd_row = (rand() % 30) + 1;
    int rnd_col = (rand() % 150) + 1;
    int rnd_size = (rand() % (6 - 3 + 1)) + 3;

    for (int i = 0; i < rnd_size; ++i)
    {
        for (int j = 0; j < rnd_size; ++j)
        {
            if(rnd_row + rnd_size <= 30 && rnd_col + rnd_size <= 150)
                board[rnd_row + i][rnd_col + j] = 1;
        }
    }
    printf("PLACING DONE AT ROW: %d\t AND COL: %d\t WITH SIZE: %d\n", rnd_row, rnd_col, rnd_size);
}

void printBoard(int board[30][150])
{
    printf("\n");
    for (int row = 0; row < 30; ++row)
    {
        for (int col = 0; col < 150; ++col)
        {
            if(board[row][col] == 1)
            {
                printf("#");
                if(col == 149)
                    printf("\n");
            }
            else
            {
                printf(" ");
            }

        }
    }
}

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    int board[30][150];
    init_board(board);

    for (int i = 0; i < 30; ++i)
         place_block(board);

    printBoard(board);
    printf("\n");
    return 0;
}