#include <stdio.h>
#include <conio.h>
#include <math.h>

float CalculateFrequency(float ind, float res, float cap)
{
    return ((float) sqrt(1 / (ind * res) - (res / (4 * cap))));
}

int main()
{
    float ind, res, cap = 0.1;
   // float df;
   // clrscr();

    printf("Enter the value of inductance: ");
    scanf("%f", &ind);

    printf("\nEnter the value of resistance: ");
    scanf("%f", &res);

    do
    {
        printf("Damped Frequency = %f for L = %f, R = %f and C = %f\n", CalculateFrequency(ind, res, cap), ind, res, cap);
        cap = cap + 0.1;
    } while (cap < 1.1);

    getch();
    return 0;
}