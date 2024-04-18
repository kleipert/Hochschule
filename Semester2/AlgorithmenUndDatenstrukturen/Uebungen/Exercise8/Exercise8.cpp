#include "iostream"

float F_recursive(int depth)
{
    if(depth <= 1)
        return 1.0f / static_cast<float>(depth);

    // Calculate 1 / depth and add it to the next terms
    return 1.0f / static_cast<float>(depth) + F_recursive(depth - 1);
}

float F_iterative(int depth)
{
    float sum = 0.0f;
    for (int i = 1; i <= depth; ++i)
        sum += 1.0f / static_cast<float>(i);

    return sum;
}

int main()
{
    std::cout << F_recursive(3) << std::endl;
    std::cout << F_iterative(3);
    return 0;
}
