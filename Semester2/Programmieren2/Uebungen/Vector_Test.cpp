#include "iostream"
#include "Vector.h"

void Test_Addition()
{
    Vector v1 = Vector(10);
    Vector v2 = Vector(10);
    for (int i = 0; i < 10; ++i)
    {
        v1[i] = i;
        v2[i] = i;
    }


    std::cout << "Test Addition: V1 -> " << v1;
    std::cout << "Test Addition: V2 -> " << v2;

    Vector v3 = v1 + v2;

    std::cout << "Test Addition: Should be 2,4,8,10, ... " << v3;
}

int main()
{
    Vector v1 = Vector(10);
    for (int i = 0; i < 10; ++i)
    {
        v1[i] = i;
    }
    //std::cout << v1;

    Test_Addition();
}

