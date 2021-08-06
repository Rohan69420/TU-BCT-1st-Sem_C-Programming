#include <stdio.h>
#include <string.h>
void main(){
    char str1[25],str2[25];
    printf("\nEnther two string you want to compare");
    fflush(stdin);
    gets(str1);
    fflush(stdin);
    gets(str2);
    if (strcmp(str1,str2)==0)
    printf("\nThe given strings are the same");
    else 
    printf("The given strings are not the same");
}