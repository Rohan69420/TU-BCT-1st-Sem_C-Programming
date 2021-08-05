#include <stdio.h>
#include <conio.h>
void main()
{
    char x;
    printf("Enter an alphabetical character");
    scanf(" %c",&x);
    if (x>='A' && x<='Z'){
        printf("\nIt is uppercase");
        printf("\nThe lowercase version of this is: %c",x+('a'-'A'));
    }
    else if (x>='a' && x<='z'){
        printf("\nThis is lowercase");
        printf("\nThe uppercase of this is %c",x-('a'-'A'));
    }
    else
    printf("\nPlease input valid alphabetical character.");
    getch();
}