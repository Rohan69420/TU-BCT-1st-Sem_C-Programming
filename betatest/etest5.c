#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str1[100];
    int i = 0,a,b=0;
    printf("\nEnter a string");
    gets(str1);
    while (str1[i] != '\0')
    {
        i++;
    }
    i = i - 1;
    a=i;
    for (int j = 0; j <= i; j++)
    {
        if (str1[a]!=str1[b]){
            printf("\nNot a palindrome.");
            exit(0);
        }

    }
    printf("It is a palindrome.");
    return 0;
}