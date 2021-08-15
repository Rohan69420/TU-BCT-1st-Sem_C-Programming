#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
    int vowel=0;
    char word[15],dec[3],buffer[256];
    FILE *fp;
    fp=fopen("vowelfree.txt","w+");
    if (fp==NULL){
        printf("\nThe file couldn't be opened.");
        exit(1);
    }
    do{

    printf("\nEnter a word");
    scanf("%s",word);
    for (int i=0;i<strlen(word);i++){
        if (tolower(word[i])=='a' || tolower(word[i])=='e' || tolower(word[i])=='i' || tolower(word[i])=='o' || tolower(word[i])=='u')
            vowel=1;
    }
    if (vowel==0)
    fprintf(fp," %s",word);
    printf("\nDo you wish to continue?(YES/NO)");
    fflush(stdin);
    gets(dec);
    }while(strcmp(dec,"NO")!=0);
    rewind(fp);
    fgets(buffer,256,fp);
    printf("\n%s",buffer);
    fclose(fp);
    getch();
    return 0;
}