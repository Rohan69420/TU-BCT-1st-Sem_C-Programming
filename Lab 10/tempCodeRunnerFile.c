#include <stdio.h>
#include <conio.h>
#include <stdlib.h> //for exit();
#include <string.h>
int main()
{
    int i = 0;
    char prime[] = "Sher Bahadur Deuba", str[30];
    while (1)
    {
        printf("\nGuess who is the prime minister of nepal.");
            gets(str);
        i++;
        if (strcmp(prime, str) == 0)
        {
            printf("\nCorrect guess");
            exit(0);
        }
        printf("\nTry again.");
        printf("\n %d guesses remaining",3-i);
        if(i==3){
            printf("\nYou've run out of guesses");
            printf("\nThe correct answer is Sher Bahadur Deuba");
        }
    }
    getch();
    return 0;
}