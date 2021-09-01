#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char sent[80]="We are trying to find out the longest word.";
    const char s[2] = " ";
    char *temp;
    char *token;
    token=strtok(sent,s); //first token
    temp=token;
    token=strtok(NULL,s);
    while (token!=NULL){ //running for other tokens
        
         //we've already initialized address
        printf("\n%s",token);
        if (strlen(temp)<strlen(token))
        temp=token;
        printf("\nT%s :",temp);
        token=strtok(NULL,s);
    }
    printf("\nThe largest word is %s",temp);
    getch();
    return 0;
}