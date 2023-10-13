#include <stdio.h>

// This code counts from 1 to 10 and then counts backwards from -5 to -15 using do while loops
int main()
{
    int startCount = 1;
    printf("Counting from 1 to 10: \n");

    do
    {
        printf("%d ", startCount++);
    }while (startCount <= 10);

    startCount = -5;

    printf("\nCounting from -5 to -15: \n");
    do
    {
        printf("%d ", startCount--);
    }while (startCount >= -15);

    printf("\nGood Bye!\n");

}