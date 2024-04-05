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
    Vector v3 = v1 + v2;
    std::cout << "Test Addition: Should be 2,4,8,10, ... " << v3;
}

void Test_Compare()
{
    Vector v1 = Vector(5);
    Vector v2 = Vector(5);

    for (int i = 0; i < 5; ++i)
    {
        v1[i] = i;
        v2[i] = i;
    }
    std::cout << "Compare: Should return true -> " << (v1 == v2);
}

void Test_Print(){
    Vector v1 = Vector(10);
    for (int i = 0; i < 10; ++i)
    {
        v1[i] = i;
    }
    std::cout << "Printing Vector from 0-9: " << v1;
}

void Test_PushBack(){
    Vector v1 = Vector(1);
    v1[0] = 0;
    v1.PushBack(1);
    std::cout << "Test Push Back should be size 2 with 0 and 1" << v1;
}

int main()
{
    Test_Print();
    std::cout << "\n";
    Test_Addition();
    std::cout << "\n";
    Test_Compare();
    std::cout << "\n";
    Test_PushBack();
    std::cout << "\n";
}

