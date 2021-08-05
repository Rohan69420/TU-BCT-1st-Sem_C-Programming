#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    int n, i = 1, sum = 0;
    char s[3];
    float avg;
    do
    {
        printf("\nEnter an integer number");
        scanf("%d", &n);
        if (n >= 1 && n <= 100)
        {
            if (n % 9 == 0 && n % 6 != 0)
            {
                sum = sum + n;
                avg = sum / i;
                i++;
            }
        }
        printf("\nDo you want to continue?");
        scanf(" %s", s);
    } while (strcmp(s, "yes") == 0 && i<=100);
        printf("The sum is %d and the average is %f", sum, avg);
    getch();
}