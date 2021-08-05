#include <stdio.h>
#include <conio.h>
void main()
{
    char y,str[40];
    printf("Enter a character and then a string");
    scanf(" %c %s",&y,&str);
    printf("\nThe character your entered was: %c",y);
    printf("\nThe string that your entered was: %s",str);
    getch();
}