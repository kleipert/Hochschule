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

void TestCompare(){
    Vector v1 = Vector(5);
    Vector v2 = Vector(5);

    for (int i = 0; i < 5; ++i)
    {
        v1[i] = i;
        v2[i9 = i;
    }

    std::cout << "Compare: Should return true -> " << v1 == v2;
}
