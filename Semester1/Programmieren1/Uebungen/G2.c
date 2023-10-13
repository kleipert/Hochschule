#include <stdio.h>

// This code takes 2 input values c and r and increases the value of c by r percent 10 times.
// It also prints the resulting value every time.
int main()
{
    float c, r;
    printf("C:");
    scanf("%f", &c);
    printf("r:");
    scanf("%f", &r);

    int i = 0;
    do {
        c = c + c*(r / 100.0f);
        i++;
        printf("\ny=%d: c=%.1f", i, c);
    } while (i<10);
    printf("\nGood bye!\n");
}