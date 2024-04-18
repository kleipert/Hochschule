#include "iostream"

/*
 * Erkennen Sie die Gesetzmäßigkeit und formulieren Sie anschließend, wie 𝐹(𝑛) mit 𝐹(𝑛 + 1) zusammenhängt.
 *
 * Der Zusammenhang besteht darin, dass man immer den Zähler um 1 erhöht und den Nenner um 2. Dadurch bekommt man eine immer
 * kleinere Zahl und nähert sich Schritt für Schritt an Pi an.
 *
 */

/*
float piRecursive(int val = 10)
{
    while(val >= 1)
    {
        val--;
        return piRecursive(val);
    }
    return 1 + static_cast<float>(val) / static_cast<float>(val * 2 + 1);
}*/

float F_recursive(float val = 0)
{
    float sum = 1;
    while (val <= 10)
    {
        val++;
        float nextVal = (1 + (val / (val * 2 + 1)));
        sum *= nextVal;
    }
    return sum;
}

int main()
{
    std::cout << 2 * F_recursive() << std::endl;
    return 0;
}
