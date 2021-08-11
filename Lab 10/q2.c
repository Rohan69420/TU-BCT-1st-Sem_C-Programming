#include <stdio.h>
#include <string.h> //necessary for string
#include <conio.h>
int main()
{   
    int check=1;
    char str1[10];
    printf("\nEnter a string to check if it is a palindrome ");
    gets(str1);
    //str1=tolower(str1); //guess it doesnt work with strings
    for (int i=0;i<strlen(str1);i++){
       // printf("%c",str1[i]);
        //printf("\t%c\n",str1[strlen(str1)-i-1]);
        if(str1[i]!=str1[(strlen(str1)-i-1)]){
            check=0;
        }
    }
    if (check==1){
        printf("\nIt is a palindrome.");
    }
    else {
        printf("\nIt is not a palindrome.");
    }
    //printf("%d",strlen(str1));
    getch();
    return 0;
}