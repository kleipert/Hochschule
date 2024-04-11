#include "iostream"

unsigned F_r(unsigned start)
{
    if(start <= 2)
        return 1;
    return (start + F_r(start -2));
}

unsigned F_i(unsigned start)
{
    unsigned result = 1;
    unsigned val1 = 1;
    unsigned val2 = 1;

    if(start > 2)
    {
        for (int i = 3; i <= start; ++i)
        {
            result = i + val2; // 4 5 9 11
            val2 = val1;       // 1 4 5 9
            val1 = result;     // 4 5 9 11
        }
    }

    return result;
}

int main()
{
    unsigned startValue = 50;
    std::cout << "Exercise 5: Recursive with nbr " << startValue << ": " << F_r(startValue) << std::endl;
    std::cout << "Exercise 5: Iterative with nbr " << startValue << ": " << F_i(startValue) << std::endl;
}
