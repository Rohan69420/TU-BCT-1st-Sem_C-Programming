#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    char str[100];
    FILE *fp;
    fp=fopen("Hey.txt","w");
    if (fp==NULL){
        printf("\nThe file couldn't be opened");
        exit(1);
    }
    printf("\nEnter a string that you want to write to the file.");
    gets(str);
    fputs(str,fp); //string and file pointer
    fclose(fp);
    getch();
    return 0;
}