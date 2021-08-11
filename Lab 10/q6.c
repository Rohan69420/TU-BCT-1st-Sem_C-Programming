#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char str[50],str1[20],str2[20],str3[50];
    printf("\nEnter a string");
    gets(str);
    printf("\nThe length of string is %d",strlen(str));
    printf("\nEnter a word you want to compare it to.");
    gets(str1);
    if(strcmp(str,str1)==0)
    printf("\nThe strings are both the same");
    else 
    printf("\nThe strings are different.");
    printf("\nIs there anything you want to add to the initial string?:");
    fflush(stdin); //attempting to flush the buffer
    gets(str2);
   // printf("\nGot the string, %s",str2);
    strcat(str,str2);
    printf("\nThe concatenated string is %s",str);
    printf("\nNow we'll copy the string to another string.");
    strcpy(str3,str);
    printf("\nHere the third string must have all the data replace by contents of 1st one.");
    printf("\nString first: %s",str);
    printf("\nString third: %s",str3);
    getch();
    return 0;
}