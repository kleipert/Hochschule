#include <stdio.h>
#include <stdlib.h>

enum PizzaTypes {
    Margherita,
    Salami,
    Funghi,
    Hawaii
};

enum PizzaSizes {
    Small,
    Medium,
    Large,
    ExtraLarge,
    XXL,
    Party
};

struct Pizza {
    enum PizzaTypes Type;
    enum PizzaSizes Size;
};

void printPizzaTypes()
{
    printf("Available types are: \n");
    printf("0 : Margherita\n1 : Salami\n2 : Funghi\n3 : Hawaii\n");
}

void printPizzaSizes()
{
    printf("Available sizes are: \n");
    printf("0 : Small\n1 : Medium\n2 : Large\n3 : Extra Large\n4 : XXL\n5 : Party\n");
}

int GetPizzaType()
{
    int pizzaType = -1;
    printPizzaTypes();
    scanf ("%d",&pizzaType);
    if(pizzaType >= 0 && pizzaType <= 3)
    {
        printf("\n");
        printf("You chose %d\n", pizzaType);
        printf("\n");
        return pizzaType;
    }
    else
    {
        printf("Wrong Input! Enter a number between 0 and 3\n");
        while (getchar() != '\n')
            continue;
        GetPizzaType();
    }
}
int GetPizzaSize()
{
    int pizzaSize = -1;
    printPizzaSizes();
    scanf ("%d",&pizzaSize);
    if(pizzaSize >= 0 && pizzaSize <= 5)
    {
        printf("\n");
        printf("You chose %d\n", pizzaSize);
        printf("\n");
        return pizzaSize;
    }
    else
    {
        printf("Wrong Input! Enter a number between 0 and 5\n");
        while (getchar() != '\n')
            continue;
        GetPizzaSize();
    }
}


struct Pizza orderPizza(int currentOrderNbr)
{
    int pType = 0;
    int pSize = 0;
    printf("Please choose your pizza number #%d\n", currentOrderNbr);
    pType = GetPizzaType();
    pSize = GetPizzaSize();
    struct Pizza orderedPizza;
    orderedPizza.Type = pType;
    orderedPizza.Size = pSize;
    return orderedPizza;
}

int ContinueOrdering()
{
        int isOrdering = 0;
        printf("Do you want to continue?\n1 = Yes\n2 = No\n");
        scanf("%d", &isOrdering);
        if(isOrdering == 1 || isOrdering == 2)
            return isOrdering;
        else
        {
            while (getchar() != '\n')
                continue;
            ContinueOrdering();
        }
}

void printPizza(struct Pizza pizzaToPrint, int pizzaNbr)
{
    const char* PizzaTypes[] = {"Margherita", "Salami", "Funghi", "Hawaii"};
    const char* PizzaSizes[] = {"Small", "Medium", "Large", "Extra Large", "XXL", "Family"};
    printf("Pizza #%d: %s (%s)\n", pizzaNbr, PizzaTypes[pizzaToPrint.Type], PizzaSizes[pizzaToPrint.Size]);
}

int main()
{
    int currentPizzaCount = 1;
    struct Pizza orderedPizzas[10];


    printf("Hello! Welcome to UASKPS! - University of Applied Sciences Kempten Pizza service!\nYou can order up to 10 pizzas.");

    while(1)
    {
        orderedPizzas[currentPizzaCount - 1] = orderPizza(currentPizzaCount);
        currentPizzaCount++;
        if(ContinueOrdering() == 2 || currentPizzaCount == 11)
            break;
    }
    printf("Here is your complete order: \n");
    for (int i = 0; i < currentPizzaCount - 1; ++i)
    {
        struct Pizza pizza = orderedPizzas[i];
        printPizza(pizza, i+1);

    }
    printf("\n");

    return 0;
}