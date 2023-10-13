#include <stdio.h>

// This code counts from 1 to 10 and then counts backwards from -5 to -15 using do while loops
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