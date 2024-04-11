#include "iostream"

unsigned count = 0;
void hanoi(int n, char from, char to, char temp)
{
    if (n == 1)
    {
        std::cout << "Move disk 1 from " << from << " to " << to << std::endl;
        count++;
        return;
    }

    hanoi(n - 1, from, temp, to); // Move n-1 disks from start to temp using the end as "buffer"
    std::cout << "Move disk " << n << " from " << from << " to " << to << std::endl;
    hanoi(n - 1, temp, to, from); // Move the n-1 disks we just moved to temp to our end using the start as "buffer"
    count++;
}

int main()
{
    //f(n) = 2^n - 1
    // 3 disks take 7 turns
    // 4 disks take 15 turns
    // 5 disks take 31 turns
    // 6 disks take 63 turns
    int disks = 6; // number of discs
    hanoi(disks, 'A', 'C', 'B');
    std::cout << count;
    return 0;
}
