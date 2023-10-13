#include <stdio.h>

//This outputs different numbers based on some arithmetic operations using for loops
int main()
{
    int startVal = 75;
    printf("Output for first loop:\n");
    for (int i = 0; i < 13; ++i)
    {
        printf("%d " , startVal);
        startVal -= 5;
    }

    startVal = 0;
    printf("\nOutput for second loop:\n");
    for (int i = 0; i < 50; ++i)
    {
        startVal++;
        if(startVal % 3 == 0 || startVal % 7 == 0)
            continue;
        printf("%d " , startVal);
    }
    printf("\n");
    return 0;
}
