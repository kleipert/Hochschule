#include <stdio.h>

int main()
{
    int width;
    int height;

    printf("Rectangle Width?: ");
    scanf("%d", &width);

    printf("Rectangle Height?: ");
    scanf("%d", &height);

    for (int i = 0; i < height; ++i)
    {
        if(i == 0 || i == height - 1)
        {
            for (int j = 0; j < width; ++j)
            {
                printf("#");
            }
        }
        else
        {
            for (int j = 0; j < width; ++j)
            {
                if(j == 0 || j == width - 1)
                {
                    printf("#");
                }
                else
                {
                    printf(" ");
                }

            }
        }
        printf("\n");
    }
    return 0;
}
