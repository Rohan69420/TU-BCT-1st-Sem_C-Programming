#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("textsource.txt","r");
    if (fp==NULL){
        printf("\nThe file could not be opened.");
        exit(1);
    }
    else 
    do{
        ch=fgetc(fp);
        printf("%c",ch);
    }
    while(ch!=EOF);
    getch();
    return 0;
}