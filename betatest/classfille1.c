#include <stdio.h>
#include <conio.h>
#include <stdlib.h> //i think we need stdlib for accessing file
struct details
{ //defining structure globally so that it is available outside of main
    char name[30];
    int fav_num;
};
int main()
{
    struct details d[10]; //defining the number of structures
    int n,from_filen;
    char from_file[30];
    FILE *fp;
    fp = fopen("newfile.txt", "w+");
    if (fp == NULL)
    {
        printf("\nThe file couldn't be opened");
        exit(1);
    }
    printf("\nEnter the number of data you want to add:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\nName:");
        fflush(stdin); //clearing input buffer
        gets(d[i].name);
        printf("\nFavorite number");
        scanf("%d", &d[i].fav_num);
        fprintf(fp, "\n %s %d", d[i].name, d[i].fav_num); //writing to the file
    }
    rewind(fp); //resetting the file pointer to the start of file
    //int i = 0;
    while (1)
    {
        //fscanf(fp, "%s %d", from_file, from_filen);
       
        //i++;
        if ((fscanf(fp, "%s %d", from_file,&from_filen) ) == EOF)
        {
            break;
        } //using 1st member as temp storer.
     printf("\nName: %s\nRoll number: %d", from_file, from_filen); //ridiculously flawed
     }

    fclose(fp);
    getch();
    return 0;
}