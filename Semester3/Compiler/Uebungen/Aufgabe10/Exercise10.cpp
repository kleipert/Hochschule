#include <stdio.h>

char token;
void S(); void A(); void B();

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
        token=scanner();
    }
}

void S()
{
    A();
    B();
}

void A()
{
    
}

void B()
{

}

int main()
{
    while (!feof(stdin)) parser();
}
