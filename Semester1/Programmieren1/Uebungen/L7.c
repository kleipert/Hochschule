#include <stdio.h>

int main()
{
    int width;
    int height;

    printf("Rectangle Width?: ");
    scanf("%d", &width);

    printf("Rectangle Height?: ");
    scanf("%d", &height);

    int spaces = width * height;
    for (int i = 0; i < spaces; ++i)
    {
        if(i <= width || i >= spaces - width)
        {
            printf("#");
            if(i == width - 1){
                printf("\n");
            }
            if(i == spaces -1){
                printf("\n");
            }
            continue;
        }
        if(i % width == 0)
        {
            printf("#");
            continue;
        }
        if(i % width == width - 1)
        {
            printf("#\n");
            continue;
        }
        printf(" ");
    }
    return 0;
}
