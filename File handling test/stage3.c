#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
//attempting to retrive different data types with \n and \t
//fairly,fscanf unaffected the \n \t as if it weren't there
//fprintf does seem to write it as the text file seems to go into a new line.
int main()
{
    char word[10],*word1;
    int num,num1;
    FILE *fp; //setting up a file pointer
    fp=fopen("stage3.txt","w+");
    if (fp==NULL){ //Returns null when file cannot be opened.
    printf("\nThere has occured an error.");
    exit(1); //exiting with exit code 1
    }
    printf("\nEnter a word and a number to add to file ");
    scanf("%s",&word); //scanning for string
    scanf("%d",&num);
    printf("\n%s",word);
   // word1=(char*)malloc(strlen(word)*sizeof(char));
    fprintf(fp,"%s\n%d",word,num); //NEEDS SPACE BETWEEN DATA TYPES ELSE, WE WILL HAVE READING ISSUES
    rewind(fp); //rewinding head back to start.
    fscanf(fp,"%s\t%d",word1,&num1); //should return EOF if it reaches end of file.
    printf("\nThe word you entered was: %s\nThe number you entered was: %d",word1,num1);
    fclose(fp); //closing file to add EOF at the end.
    getch();
    return 0;
}