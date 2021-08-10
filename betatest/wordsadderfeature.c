#include <stdio.h>
#include <stdlib.h>
//#include <stdbool.h> //header file to use boolean [edit:boolean aint working for some reason]
#include <conio.h>
#include <string.h>
struct wordmean
{ //trying to store it in struct for easy access
    char word_[30];
    char meaning_[200];
};
int main()
{
    //typedef enum { false, true } bool; [edit:not working either]
    FILE *fp; 
    int i,continu=1;
    //bool continue = true; //boolean yes or no
    char word[30], meaning[200], decision;
    struct wordmean m[10];        //starting with 10 words
    fp = fopen("Test.bin", "wb"); //opening in write binary mode
    if (fp == NULL)
    { //error handling
        printf("\nThe file couldn't be opened");
        exit(1);
    }
    while (continu==1)
    {
        printf("\nEnter the word you want to add");
        gets(word);
        printf("\nNow enter it's meaning");
        gets(meaning);
        fprintf(fp, "%s%s",word,meaning ,m->word_[i], m->meaning_[i]); //file writing
        i++;
        printf("\nDo you want to add another word?(Y/N)");
        decision=getch();
        if (decision == 'N'){
            continu=0;
        }
        fclose(fp);
    }
    getch();
    return 0;
}