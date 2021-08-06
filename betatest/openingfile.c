#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char get[100];
    fp=fopen("Hey.txt","r");
    if (fp==NULL){
        printf("\nCouldnt open the file");
        exit(1);
    }
    fgets(get,100,fp);
    printf("\n\n\nThe data in the file is:\n%s",get);

    
    getch();
    return 0;
}