#include "iostream"

unsigned ggT(unsigned a, unsigned b)
{
    unsigned big, small, rest = 1;
    big = a;
    small = b;

    while(rest != 0)
    {
        if(big < small)
        {
            unsigned tmp = big;
            big = small;
            small = tmp;
        }
        rest = big - small;
        big = small;
        small = rest;
    }
    return big;
}

int main()
{
    std::cout << ggT(12, 18);
    return 0;
}
