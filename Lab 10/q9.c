#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char word[50];
    int count;
    printf("\nEnter the word ");
    gets(word);
    for (int i=0;i<strlen(word);i++){
        count=0;
    for (int j=0;j<strlen(word);j++){
        if (word[i]==word[j])
        count++;
    }
    printf("\nThe frequency of the word %c is %d",word[i],count);
    }
    getch();
    return 0;
}