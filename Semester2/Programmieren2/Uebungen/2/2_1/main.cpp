#include <iostream>

unsigned Stack(unsigned counter)
{
    char* array = new char[1024];
    if(counter == 100000)
        return counter;
    std::cout << "Function Call Nbr: " << counter << std::endl << "Stackadress: " << &counter << std::endl;
    counter++;
    return Stack(counter);
}

int main()
{
    unsigned counter = 0;
    Stack(counter);
    std::cout << "\n";
}

// 2_1b
//  i) ca 45.000 mal
//  ii) Segmentation Fault: Schreiben in Speicher, der nicht mir gehört.
//  iii) 8 * 45000 byte
//  vi) Springt immer um die gleiche Menge

// 2_1c
//  i) Etwa halb so oft
//  ii) Kopieren kann gefährlich sein