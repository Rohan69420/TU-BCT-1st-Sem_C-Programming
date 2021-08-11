#include <stdio.h>
#include <conio.h>
#include <stdlib.h> //for malloc
#include <string.h>
char word[50],rev[50];
int i;
void recur(int i){
    printf("%d",i);
    if (i<strlen(word)){
    rev[i]=word[strlen(word)-i-1];
    recur(i++);
    }
    if (i==strlen(word)){       
    rev[i]='\0';
    printf("\nThe reversed string is %s",rev);    
    }
}
int main()
{
    printf("\nEnter the word that you want to reverse");
    gets(word);
    i=0;
    recur(i);
    getch();
    return 0;
}