#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter a number from 1 to 7");
    scanf("%d",&n);
    if (n==1)
        printf("Sunday");
    if (n==2)
        printf("Monday");
    if (n==3)
        printf("Tueday");
    if (n==4)
        printf("Wednesday");
    if (n==5)
        printf("Thursday");
    if (n==6)
        printf("Friday");
    if (n==7)
        printf("Saturday");
    getch();
}