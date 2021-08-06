#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char str1[]="FIRST";
    char str2[]="SECOND";
    printf("\nWe are checking to see what kind of changes occurs when using strcat");
    strcat(str1,str2); //prediction, contactenated in first one and 2nd remains unchanged
    printf("\nThe result after using strcat, first \t%s,\nsecond \t%s",str1,str2);

    
    getch();
    return 0;
}