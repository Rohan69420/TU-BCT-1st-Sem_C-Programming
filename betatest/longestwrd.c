#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
void counter(char *string, char *longest, int *vowels, int *consonants);
int main()
{
    char string[50], longest[30];
    int vowel = 0, consonants = 0;
    printf("Enter a sentence\n");
    gets(string);
    counter(string, longest, &vowel, &consonants);
    printf("longest word is %s\nNo of vowel are %d\n No. of consonants are %d\n ", longest, vowel, consonants);
    return 0;
}
void counter(char *string, char longest[], int *vowels, int *consonants)
{
    char token[50];
    int flag = 0, j = 0, k = 0;
    while (flag == 0)
    {
        token[j] = string[k];
        if (string[k] == 'a' || string[k] == 'e' || string[k] == 'i' || string[k] == 'o' || string[k] == 'u' || string[k] == 'A' || string[k] == 'E' || string[k] == 'I' || string[k] == 'O' || string[k] == 'U')
            (*vowels)++;
        else if (isalnum(string[k]))
            (*consonants)++;

        j++;
        if (string[k] == ' ' || string[k] == ',' || string[k]=='\0')
        {
            token[j - 1] = '\0';
            if (strlen(token) > strlen(longest))
            {
                strcpy(longest, token);
            }
            strcpy(token, "");
            j = 0;
        }
        if (string[k] == '\0')
            flag = 1;
        k++;
    }
}