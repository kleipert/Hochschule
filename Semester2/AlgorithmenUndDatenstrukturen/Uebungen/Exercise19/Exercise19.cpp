#include "iostream"

int fact_it(int amount)
{
    int result = 1;
    for (int i = 1; i <= amount; ++i)
    {
        result *= i;
    }
    return result;
}

int main()
{
    std::cout << fact_it(4) << std::endl;
    return 0;
}
