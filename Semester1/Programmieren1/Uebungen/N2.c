#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    srand(time(NULL));
    char syllables[6][4] = {"asd", "qwe", "tzu", "fgh", "kli", "vbn"};
    printf("stored:\n");
    for (int i = 0; i < 6; ++i)
    {
        printf("%s\n", syllables[i]);
    }

    for (int i = 0; i < 10; ++i)
    {
        int syllablesAmount = (rand() % (5 - 2 + 1)) + 2;
        for (int j = 0; j < syllablesAmount; ++j)
        {
            int itemIdx = (rand() % 6);
            printf("%s", syllables[itemIdx]);
        }
        printf("\n");
    }
    return 0;
}