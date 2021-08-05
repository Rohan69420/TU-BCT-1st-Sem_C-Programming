#include <stdio.h>
#include <conio.h>
int main()
{
    float n, sum = 0.0;
    do{
        printf("\nEnter a number:\t");
        scanf("%f", &n);
        if (n > 0.0)
            sum += n;
    }
    while(n!=0);    
    printf("The sum of positive numbers is: %.2f", sum);
    getch();
    return 0;
}