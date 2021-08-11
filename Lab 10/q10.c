#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char str[50];
    printf("\nEnter the word to convert into opposite case");
    gets(str);
    for (int i=0;i<strlen(str);i++){
        if (isupper(str[i]))
        str[i]=tolower(str[i]);
        if (islower(str[i]))
        str[i]=toupper(str[i]);
    }
    printf("\nThe altered string is %s",str);
    getch();
    return 0;
}