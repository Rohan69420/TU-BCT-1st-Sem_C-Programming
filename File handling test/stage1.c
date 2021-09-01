#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
//attempting to use fscanf to retrieve data
int main()
{
    char word[10],word1[10];
    FILE *fp; //setting up a file pointer
    fp=fopen("stage1.txt","w+");
    if (fp==NULL){ //Returns null when file cannot be opened.
    printf("\nThere has occured an error.");
    exit(1); //exiting with exit code 1
    }
    printf("\nEnter a word to add to file ");
    gets(word);
    fprintf(fp,"%s",word);
    //fclose(fp);
    // testing to see if we need to open in r+ mode.
   // fp=fopen("stage1.txt","r+");
    rewind(fp); //rewinding head back to start.
    fscanf(fp,"%s",word1); //should return EOF if it reaches end of file.
    printf("\nThe word you entered was: %s",word1);
    fclose(fp); //closing file to add EOF at the end.
    getch();
    return 0;
}