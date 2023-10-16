#include <stdio.h>

int main()
{
    int formulaComplete = 0;
    int numberOrOperator = 0;
    while(formulaComplete == 0)
    {

    }
    printf("\n");
    return 0;
}

char getOperator()
{
    char allowedInputs[] = {'+', '-', '*', '/', '='};
    printf("Please enter an operator (+,-,* or /) if you enter the = sign, your calculation will be performed");
    char input = _getch();

    for (int i = 0; i < 5; ++i)
    {
        if(allowedInputs[i] == input)
            return input;
    }
}

char getNumber()
{
    char allowedInputs[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    printf("Please enter an operator (+,-,* or /) if you enter the = sign, your calculation will be performed");
    char input = _getch();

    for (int i = 0; i < 10; ++i)
    {
        if(allowedInputs[i] == input)
            return input;
    }
}
