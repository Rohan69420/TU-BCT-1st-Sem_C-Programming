#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char str[100];
    int n;
    printf("\nEnter a string whose length you want to find out.");
    gets(str);
    n=strlen(str);
    printf("\n\nThe length of the string is %d",n);
    getch();
    return 0;
}