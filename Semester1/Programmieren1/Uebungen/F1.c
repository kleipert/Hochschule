#include <stdio.h>

void statistics(float n1, float n2, float n3, float *sum, float *avg)
{
    *sum = n1 + n2 + n3;
    *avg = *sum/3;
}

int main()
{
    float sum = 0;
    float avg = 0;
    for (int num1 = 0; num1 <= 5; ++num1)
    {
        for (int num2 = 0; num2 <= 5; ++num2)
        {
            for (int num3 = 0; num3 <= 5; ++num3)
            {
                statistics(num1, num2, num3, &sum, &avg);
                printf("num1: %d --> num2: %d --> num3: %d ---------> sum: %.0f --> avg: %.2f\n", num1, num2, num3, sum, avg);
            }
        }
    }

}