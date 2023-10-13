#include <stdio.h>
int main()
{
    int num1, num2, num3, sum, prod;
    float avg;

    printf("Enter three numbers separated by a space: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    prod = num1 * num2 * num3;
    avg = (sum) / 3;

    printf("Numbers were %d, %d and %d.\n", num1,num2,num3);
    printf("Sum is %d, product is %d and average is %f\n", sum, prod, avg);
}
