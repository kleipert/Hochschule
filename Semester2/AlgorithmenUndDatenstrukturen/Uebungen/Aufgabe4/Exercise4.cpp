#include "iostream"

unsigned F_r(unsigned start)
{
    if(start <= 2)
        return 1;
    return (F_r(start-2) + F_r(start-1));
}

unsigned F_i(unsigned start)
{
    unsigned val1 = 1;
    unsigned val2 = 1;
    unsigned result = 1;

    if(start > 2)
    {
        for (int i = 3; i <= start; ++i)
        {
            val1 = val2;
            val2 = result;
            result = val1 + val2;
        }
    }
    return result;
}

int main()
{
    unsigned startValue = 6;
    std::cout << "Exercise 4: Recursive with nbr 5 " << startValue << ": " << F_r(startValue) << std::endl;
    std::cout << "Exercise 4: Iterative with nbr " << startValue << ": " << F_i(startValue) << std::endl;
}
