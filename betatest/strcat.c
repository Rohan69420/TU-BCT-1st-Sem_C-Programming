#include <stdio.h>
#include <string.h>
void main(){
    char ini[25]; //character to concatenate
    printf("\nHere we are going to attempt to concatenate two strings");
    printf("\nEnter a string you want to concatenate with \"in Kathmandu");
    fflush(stdin);
    gets(ini);
    strcat(ini,"in Kathmandu");
    printf("\nHopefully the result is:\n%s",strcat(ini,"in Kathmandu")); //turns out you can directly concatenate on spot.
    getch();
}