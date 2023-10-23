#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("Enter first syllable (max length 5): \n");
    char strOne[5];
    fgets(strOne, 5, stdin);

    printf("Enter second syllable (max length 5): \n");
    char strTwo[5];
    fgets(strTwo, 5, stdin);

    printf("Enter third syllable (max length 5): \n");
    char strThree[5];
    fgets(strThree, 5, stdin);

    printf("First syllable: %s\n", strOne);
    printf("Second syllable: %s\n", strTwo);
    printf("Third syllable: %s\n", strThree);

    for (int i = 0; i < 5; ++i)
    {
        if(strOne[i] == '\0')
            break;
        printf("%c", strOne[i]);
    }
    for (int i = 0; i < 5; ++i)
    {
        if(strOne[i] == '\0')
            break;
        printf("%c", strOne[i]);
    }
    printf("\n");

    return 0;
}