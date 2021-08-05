#include <stdio.h> //use toupper() and tolower() from ctype.h
#include <conio.h>
int main()
{
    char str[100];
    int i;
    printf("\nEnter a string.");
    gets(str);
    for (i=0;str[i]!='\0';i++){}
    printf("\nThe length of the string is %d",i);
    for (int j=0;j<=i;j++){
        if (str[j]>96)
            str[j]=str[j]-32;
        if (str[j]<96)
        str[j]=str[j]+32;
    }
    printf("\nThe case changed string is ");
    puts(str);
    getch();
    return 0;
}