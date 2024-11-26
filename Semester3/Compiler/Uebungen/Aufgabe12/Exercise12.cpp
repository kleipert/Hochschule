#include <stdio.h>

char token;
int number;
void S();
void A();

char scanner()
{
    return getchar();
}

void check(char e_token)
{
    if (token==e_token)
        token=scanner();
    else
    {
        printf("Syntaxfehler: %c erwartet",e_token);
        while (token!='\n') token=scanner(); 
    }
}

void parser()
{
    token=scanner();
    S();
    while (token!='\n')
    {
        printf("Syntaxfehler am Eingabeende\n");
        token=scanner();
    }
}

void S()
{
    if (token=='1') 
    {
        check('1');
        number=1;
        A();
    }
    else
    {
        printf("Syntaxfehler: Binärzahl muss mit 1 beginnen\n");
        return;
    }
}
void A()
{
    if (token =='0') 
    {
        check('0');
        number=number*2;
        A();
    }
    else if (token =='1') 
    {
        check('1');
        number=number*2+1;
        A();
    }
    else if (token =='\n') 
    {
        printf("Binärzahl erkannt, Wert=%i\n",number);
    }
}