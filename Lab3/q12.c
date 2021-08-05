#include <stdio.h>
#include <conio.h>
void main()
{
    char str[70];
    printf("Enter a string:");
    scanf("%[^M]",str); //reads all characters until M is encountered 
    printf("Read string is: %s",str);
    getch();
}