#include <stdio.h>

int main()
{
    int rows;
    int signsInLastRow = 1;
    int signsToDraw = 1;
    int emptySpaces = 1;
    int emptySpacesPerSide = 1;
    printf("Number of rows?: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; ++i)
    {
        signsInLastRow += 2;
    }

    for (int i = 1; i <= rows; ++i)
    {
        signsToDraw = i + i-1;
        if(i == 1)
        {
            signsToDraw = 1;
        }
        emptySpaces = signsInLastRow - signsToDraw;
        emptySpacesPerSide = emptySpaces / 2;

        for (int j = 0; j < emptySpacesPerSide; ++j)
        {
            printf(" ");
        }
        for (int j = 0; j < signsToDraw; ++j)
        {
            printf("*");
        }
        for (int j = 0; j < emptySpacesPerSide; ++j)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
