#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    char input[200];
    FILE *sf, *tf;
    sf = fopen("source.txt", "w+");
    tf = fopen("target.txt", "a+");
    if (sf == NULL)
    {
        printf("\nThe file couldn't be opened");
        exit(1);
    }
    printf("\nEnter what you want to write to the file");
    gets(input);
    //printf("\n%s",input);
    fprintf(sf, "%s", input); //writing to source file
    rewind(sf);               //rewinding file pointer to start of source file
    fgets(input, 100, sf);
    printf("\n%s", input);    //printing contents of source file.
    fprintf(tf, "%s", input); //copying contents to target file.
    rewind(tf);
    fgets(input, 100, tf); //reading from destination
    printf("\n%s", input); //printing contents of destination file.
    fclose(sf);
    fclose(tf);

    getch();
    return 0;
}