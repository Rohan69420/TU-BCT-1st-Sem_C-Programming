#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;
    printf("Enter a character");
    ch=getchar();
    if (ch>='A' && ch<='Z')
    printf("It is uppercase");
    if (ch>='a' && ch<='z')
    printf("It is a lowercase");
    getch();
}