#include "iostream"

void collatz(int start)
{
    while (start != 1)
    {
        std::cout << start << " ";
        if(start %2 == 0)
            start = start/2;
        else
            start = 3*start +1;
    }
    std::cout << start << "\n";
}

int main()
{
    collatz(27);
    collatz(37);
    collatz(42);
    return 0;
}
