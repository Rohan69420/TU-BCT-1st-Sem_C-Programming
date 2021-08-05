#include <stdio.h>
#include <conio.h>
void main()
{
    unsigned int n;
    printf("Enter a positive integer:\t");
    scanf("%d",&n);
    if (n%2==0){
        if (n>100)
        printf("It is even number greater than 100.");
        else 
        printf("\nIt is an even number lesser than 100");
    }
    else {
        if (n%11==0 && n%7!=0)
        printf("\nIt is an odd number which is divisible by 11 and not by 7");
        else
        printf("It is an odd number not divisible by 11 or divisible by 11 and by 7 as well");
    }
    getch();
}