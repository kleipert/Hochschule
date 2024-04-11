#include "iostream"

unsigned F_r(unsigned start)
{
    if(start <= 2)
        return 1;
    return start * F_r(start-1) - F_r(start-2);
}

unsigned F_i(unsigned start)
{
    unsigned val1 = 1;
    unsigned val2 = 1;
    unsigned result = 1;

    if(start > 2)
    {
        for (unsigned i = 3; i <= start; ++i)
        {
            result = i * val1 - val2;
            val2 = val1;
            val1 = result;
        }
    }
    return result;
}

int main()
{
    unsigned startValue = 6;
    std::cout << "Exercise 4: Recursive with nbr " << startValue << ": " << F_r(startValue) << std::endl;
    std::cout << "Exercise 4: Iterative with nbr " << startValue << ": " << F_i(startValue) << std::endl;
}
