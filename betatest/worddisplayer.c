#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int main()
{
    FILE *fp;
    int i=0;
    char word[30],wget[30],wmeaning[200];
    fp=fopen("Test.bin","rb"); //opening in read binary mode
    if (fp==NULL){ //error handling
        printf("\nThe file cannot be opened");
        exit(1);
    }
    printf("\nThe word display has been initiated.");
    printf("\nEnter the word whose meaning you want to search for: ");
    gets(word);
   while (1){
        fscanf(fp,"%s%s",wget,wmeaning);
        printf("%s%s",wget,wmeaning);
        if (strcmp(word,wget)==0){
       printf("\nMeaning: %s",wmeaning);
       exit(0);
   }
   }
    getch();
    return 0;
}