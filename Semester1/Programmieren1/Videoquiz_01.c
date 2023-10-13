#include <stdio.h>

int main()
{
    float startkapital;
    float zielkapital;
    float zinssatz;
    float increment;
    float onePercent;
    int iterations = 0;

    printf("Startkapital: ");
    scanf("%f", &startkapital);

    printf("Zielkapital: ");
    scanf("%f", &zielkapital);

    printf("Zinssatz: ");
    scanf("%f", &zinssatz);

    printf("OK. Ich berechne jetzt wie lange es dauert dein Startkapital in Höhe von %f EUR "
           "so lange mit dem Zinssatz von %f Prozent zu verzinsen, bis das Zielkapital "
           "in Höhe von %f EUR erreicht ist\n", startkapital, zinssatz, zielkapital);

    while(startkapital < zielkapital)
    {
        onePercent = startkapital / 100;
        increment = onePercent * zinssatz;
        iterations++;

        startkapital += increment;
        printf("Aktuelles Kapital: %f\n", startkapital);
    }
    printf("Monate: %d", iterations);
}