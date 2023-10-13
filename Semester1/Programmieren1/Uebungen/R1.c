#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lower;
    int upper;

    printf("Lower number?: ");
    scanf("%d", &lower);
    printf("Upper number?: ");
    scanf("%d", &upper);

    printf("I will generate 10 random numbers between %d and %d\n", lower, upper);
    for (int i = 0; i < 10; ++i)
    {
        int num = (rand() % (upper - lower + 1)) + lower;
        printf("%d ", num);
    }
    printf("\n");
    return 0;
}
