#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    int n, i = 0, sum = 0,count=1;
    char s[3];
    float avg;
    do
    {
        printf("\nEnter an integer number");
        scanf("%d", &n);
        if ((n >= 1) && (n <= 100))
        {
            if ((n % 9 == 0) && (n % 6 != 0))
            {
                sum = sum + n;
                i++;
            }
            
        }
        count++;
        printf("\nDo you want to continue?");
        scanf(" %s", s);
    } while ((strcmp(s, "No") != 0) && (count<=100));
    avg=(float)sum/i;
        printf("The sum is %d and the average is %f", sum, avg);
    getch();
}