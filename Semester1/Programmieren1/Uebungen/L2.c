#include <stdio.h>

// This code prints out a multiplication table
int main()
{
    int first = 1, second = 1;

    do
    {
        do
        {
            printf("%d x %d = %d\t", first, second, first * second);
            second++;
        }while(second <= 10);
        printf("\n");
        second = 1;
        first++;
    }while(first <= 10);

}