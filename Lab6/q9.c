#include <stdio.h>
#include <conio.h>
int main()
{
    float n, sum = 0.0;
    char c;
    do{
        printf("\nEnter a number:\t");
        scanf("%f", &n);
        printf("Do you want to continue?(Y/N)");
        c=getch();
        if (n > 0.0)
            sum += n;
    }
    while(c!='n');    
    printf("The sum of positive numbers is: %.2f", sum);
    getch();
    return 0;
}