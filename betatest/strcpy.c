#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char str1[]="hello",str2[]="what is up"; //error during intializing string if [] not given
    printf("\nTesing a theory that strcpy erases the second string");
    printf("\nStrcpy should return string on spot as well: %s",strcpy(str1,str2));
    strcpy(str1,str2);
    printf("\nFirst string after:\t%s\nSecond string after:\t%s",str1,str2);
    getch();
    return 0;
}