#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void combineAndPrint(char buffer[12], char strOne[6], char strTwo[6])
{
    sprintf(buffer, "%s%s\n", strOne, strTwo);
    printf("%s", buffer);
}

int main()
{
    char strOne[6];
    char strTwo[6];
    char strThree[6];
    char result[12];

    printf("Enter first syllable (max length 5): \n");
    scanf("%s", strOne);

    printf("Enter second syllable (max length 5): \n");
    scanf("%s", strTwo);

    printf("Enter third syllable (max length 5): \n");
    scanf("%s", strThree);

    printf("First syllable: %s\n", strOne);
    printf("Second syllable: %s\n", strTwo);
    printf("Third syllable: %s\n", strThree);

    combineAndPrint(result, strOne, strTwo);
    combineAndPrint(result, strOne, strThree);

    combineAndPrint(result, strTwo, strOne);
    combineAndPrint(result, strTwo, strThree);

    combineAndPrint(result, strThree, strOne);
    combineAndPrint(result, strThree, strTwo);

    printf("\n");

    return 0;
}