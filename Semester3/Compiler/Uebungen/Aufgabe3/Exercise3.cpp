#include "iostream"

// Ad-hoc Scanner zum Erkennen des Refulären Ausdrucks 1*0*0
int scanner_a()
{
    char c;
    c = getchar();
    while (c == '1') c = getchar();
    if (c == '0')
    {
        while (c == '0') c = getchar();
        if (c == '\n')
            return 1;
        else
            return 0;
    }
    else return 0;
}

// Ad-hoc Scanner zum Erkennen von Ganzzahlen mit Vorzeichen
int scanner_b()
{
    char c;
    c = getchar();
    if ((c == '+') || (c=='-')) c = getchar();
    if (c == '0')
    {
        c = getchar();
        if (c == '\n') return 1;
        else return 0;
    }
    if ((c >= '1') && (c <= '9'))
    {
        c = getchar();
        while (c != '\n')
        {
            if ((c >= '0') && (c <= '9'))
                c = getchar();
            else return 0;
        }
        return 1;
    }
    else return 0;
}

// Ad-hoc Scanner zum Erkennen von Binärzahlen ohne führende 0
int scanner_c()
{
    char c;
    c = getchar();
    if (c == '0')
    {
        c = getchar();
        if (c == '\n') return 1;
        else return 0;
    }
    if (c == '1')
    {
        c = getchar();
        while (c != '\n')
        {
            if ((c == '0') || (c == '1'))
                c = getchar();
            else return 0;
        }
        return 1;
    }
    else return 0;
}

int main()
{
    std::cout << "Enter your Input and press Enter:\n" << scanner_b();

    return 0;
}