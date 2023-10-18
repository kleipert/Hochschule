#include <curses.h>
#include <stdio.h>

int main()
{
    int whileLoop = 1;
    int enterOperator = 0;
    float currentNumber = 0;
    int input = 0;
    int lastOperator = 43;

    void ProcessOperator(char sign)
    {
        if(enterOperator == 0)
        {
            addstr("\nWrong Input!");
            whileLoop = 0;
        }
        lastOperator = input;
        enterOperator = 0;
    }

    void ProcessNumber(int input)
    {
        if(enterOperator == 1)
        {
            addstr("\nWrong Input!");
            whileLoop = 0;
        }
        switch(lastOperator)
        {
            case 43:
                currentNumber += (input - 48);
                break;
            case 42:
                currentNumber *= (input - 48);
                break;
            case 45:
                currentNumber -= (input - 48);
                break;
            case 47:
                currentNumber /= (input - 48);
                break;
        }
        enterOperator = 1;
    }

    void ProcessInput(int input)
    {
        switch(input)
        {
            case 43:
                ProcessOperator('+');
                break;
            case 42:
                ProcessOperator('*');
                break;
            case 45:
                ProcessOperator('-');
                break;
            case 47:
                ProcessOperator('/');
                break;
            case 48:
                ProcessNumber(input);
                break;
            case 49:
                ProcessNumber(input);
                break;
            case 50:
                ProcessNumber(input);
                break;
            case 51:
                ProcessNumber(input);
                break;
            case 52:
                ProcessNumber(input);
                break;
            case 53:
                ProcessNumber(input);
                break;
            case 54:
                ProcessNumber(input);
                break;
            case 55:
                ProcessNumber(input);
                break;
            case 56:
                ProcessNumber(input);
                break;
            case 57:
                ProcessNumber(input);
                break;
            case 61:
                whileLoop = 0;
                printw("%f", currentNumber);
                break;
            default:
                whileLoop = 0;
                addstr("WRONG INPUT TRY AGAIN");
                break;
        }
    }

    // init curses:
    initscr();
    // in curses, you have to use curses functions for all terminal I/O
    addstr("Alternate between number (0-9) and operator (+,-,* or /) to enter your formula. Enter the = sign to get your result.\n");

    while(whileLoop == 1)
    {
        input = getch();
        ProcessInput(input);
    }
    addstr("\n WE DONE");
    getch();
    // end curses:
    endwin();
    return 0;
}