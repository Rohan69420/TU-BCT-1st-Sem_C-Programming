#include <stdio.h>
#include <conio.h>
#include "dummyfile.txt"
char[] finder(char[]);
int main()
{
    char intro[100],search[50];
    intro="Welcome to the custom dictionary as the project of 1st sem C.");
    printf("\n\n\n%91s",intro);
    printf("\n\nEnter the world that you want to find the meaning of:\t");
    gets(search);
    printf("\n You have entered the word.");
    printf("\n Searching...............");
    finder();
    getch();
    return 0;
}
char[] finder(char key[50]){

}