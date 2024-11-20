#include <stdio.h>

char token;
void S(); void A(); void B(); void C();

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
    C();
}

void A()
{
    if (token =='a')
    {
        check('a');
        B();
    }
    else
        check('b');
}
void B()
{
    if (token =='b')
    {
        check('b');
        check('b');
    }
    else
        C();
}
void C()
{
    if (token =='c')
        check('c');
    else
        printf("wrong input\n");
}



int main()
{
    while (!feof(stdin)) parser();
}
