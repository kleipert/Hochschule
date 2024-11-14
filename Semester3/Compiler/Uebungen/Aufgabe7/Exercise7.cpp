#include "iostream"

int scanner_a()
{
    int state=0;
    char input=' ';
    while (input !='\n')
    {
        input = getchar(); 
        switch (state)
        {
            // as many "a" as we want or one "b"
            case 0:
                if (input =='b')
                    state = 1;
                else if (input != 'a') 
                    state = -1; 
                break;
            case 1:
                if (input != '\n')
                    state = -1;
                break;
            default:
                state=-1;
                break;
        }
    }
    if (state == 1)
        printf("Input valid!\n");
    else
        printf("Input not valid!\n");
    return 0;
}

int scanner_b()
{
    int state=0;
    char input=' ';
    while (input !='\n')
    {
        input = getchar();
        switch (state)
        {
            
            case 0:
                if (input =='0')
                    state = 1;
                else
                    state = -1;
                break;
            case 1:
                if (input =='1')
                    state = 2;
                else
                    state = -1;
                break;
            case 2:
                if ((input !='1') && (input !='0') && (input != '\n'))
                    state = -1;
                break;
            default:
                state=-1;
                break;
        }
    }
    if (state == 2)
        printf("Input valid!\n");
    else
        printf("Input not valid!\n");
    return 0;
}

int main()
{
    //std::cout << "Enter your Input and press Enter:\n" << scanner_a();
    std::cout << "Enter your Input and press Enter:\n" << scanner_b();
    
    return 0;
}
