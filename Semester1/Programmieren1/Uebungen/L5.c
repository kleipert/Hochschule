#include <stdio.h>

int main()
{
    int startVal = 17;
    printf("With for loop: \n");
    for (int i = 0; i < 5; ++i)
    {
        printf("%d ", startVal);
        startVal += 3;
    }

    startVal = 17;
    printf("\nWith while loop: \n");

    while(startVal <= 29)
    {
        printf("%d ", startVal);
        startVal += 3;
    }

    printf("\nWith do-while loop: \n");
    startVal = 17;
    do
    {
        printf("%d ", startVal);
        startVal += 3;
    }
    while(startVal <= 29);
    printf("\n");
    return 0;
}
