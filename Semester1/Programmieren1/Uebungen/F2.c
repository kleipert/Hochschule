#include <stdio.h>
#include <time.h>

int fib_rec(int nbr)
{
    if(nbr == 0)
        return 0;
    if(nbr == 1)
        return 1;

    return (fib_rec(nbr-1) + fib_rec(nbr-2));
}

int fib_iterative(int nbr)
{
    if(nbr == 0)
        return 0;
    if(nbr == 1)
        return 1;

    int nbrOne = 1;
    int nbrTwo = 1;
    int tmp = 0;
    for (int i = 0; i < nbr-2; ++i)
    {
        tmp = nbrOne + nbrTwo;
        nbrOne = nbrTwo;
        nbrTwo = tmp;
    }
    return tmp;
}

int main()
{
    clock_t time;
    clock_t res_rec;
    clock_t res_iter;

    int input = 43;
    printf("Comparing calculation of %dth fibonacci number...", input);
    time = clock();
    printf("\nResult of recursion is: %d", fib_rec(input));
    res_rec = clock() - time;
    printf("\nResult of iteration is: %d", fib_iterative(input));
    res_iter = clock() - res_rec;

    printf("\nRecursive Time: %f seconds", ((float)res_rec)/CLOCKS_PER_SEC);
    printf("\nIterative Time: %f seconds", ((float)res_iter)/CLOCKS_PER_SEC);


    printf("\n");
    return 0;
}