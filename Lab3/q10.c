#include <stdio.h>
#include <conio.h>
void main()
{
    char str[50];
    printf("Enter a string");
    scanf("%10c", str);
    printf("Read string is: %s", str);
    getch();
}