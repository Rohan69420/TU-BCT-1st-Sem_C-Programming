#include <stdio.h>
#include <conio.h>
void main()
{
    char x[44];
    printf("Enter a string:\t");
    gets(x);
    printf("The string that you entered was:\t");
    puts(x);
    getch();
}