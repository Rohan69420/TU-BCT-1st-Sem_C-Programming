#include <stdio.h>
#include <conio.h>
#include <string.h>
int word_counter(char str[]){
    int words=0;
    for (int i=0;i<strlen(str);i++){
        if (str[i]==' ')
        words++;
    }
    return(words+1);
}
int main()
{
    char sentence[200];
    printf("\nEnter a sentence to count number of words ");
    gets(sentence);
    printf("\nThe number of words is %d",word_counter(sentence));
    
    getch();
    return 0;
}