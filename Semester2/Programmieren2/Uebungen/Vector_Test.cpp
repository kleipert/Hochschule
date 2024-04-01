#include "iostream"
#include "Vector.h"

int main()
{
    Vector v1 = Vector(10);
    for (int i = 0; i < 10; ++i)
    {
        v1[i] = i;
    }
    std::cout << v1;
}