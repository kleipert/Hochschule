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
        while (token!='\n') token=scanner(); // Lesen bis Eingabeende
    }
}

void parser()
{
    token=scanner();
    S();
    while (token!='\n')
    {
        printf("Syntaxfehler am Eingabeende\n");
        token = scanner();
    }
}
void S()
{
    if (token=='1') // regel S->1B angewandt)
    {
        check('1');
        number=1;
        A();
    }
    else
    {
        printf("Syntaxfehler: Unaerzahl muss mit 1 beginnen\n");
        return;
    }
}
void A()
{
    if (token =='1') // regel B->1B angewandt
    {
        check('1');
        number=number++;
        A();
    }
    else if (token =='\n') // regel B->epsilon angewandt
    {
        printf("Unaerzahl erkannt, Wert=%i\n",number);
    }
    else printf("Fehler, Unaerzahl darf nur 1 enthalten\n");
}