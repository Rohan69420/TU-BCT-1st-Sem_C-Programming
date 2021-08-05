#include <stdio.h>
#include <conio.h>
void main()
{
    char str[70];
    printf("How old are you:");
    scanf("%[a-z0-9]",str); //terminates when characters beyond specification is found
    printf("Read string is: %s",str);
    getch();
}