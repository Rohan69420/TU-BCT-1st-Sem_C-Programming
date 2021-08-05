#include <stdio.h>
#include <conio.h>
void main()
{
    int age;
    printf("Enter your age:\t");
    scanf("%d",&age);
    if (age>65)
    printf("You get seniority allowance");
    else 
    printf("You do not get he seniority allowance");
    getch();
}