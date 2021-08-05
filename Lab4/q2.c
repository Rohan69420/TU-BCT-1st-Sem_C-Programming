#include <stdio.h>
#include <conio.h>
void main()
{
    int n;
    printf("Enter an integer:\t");
    scanf("%d",&n);
    if (n<0)
    printf("\nIt is a negative integer");
    else if (n=0)
    printf("It is zero");
    else if (n>0)
    printf("It is a positive integer");
    else 
    printf("It is not an integer");
    getch();
}