#include <stdio.h>
#include <conio.h>
void main()
{
    char x;
    printf("Enter a character: \t");
    scanf(" %c",&x);
    if (x>='A' && x<='Z')
    printf("It is uppercase.");
    if (x>='a' && x<='z')
    printf("It is lowercase");
    getch();
}