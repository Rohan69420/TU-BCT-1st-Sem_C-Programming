#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int year;
    char dec='y';
    FILE *fp;
    fp=fopen("leapyrs.txt","w+");
    if (fp==NULL){
        printf("\nThe file couldn't be opened.");
        exit(1);
    }
    do{
    printf("\nEnter a year");
    scanf("%d",&year);
    if (year%4==0 && year%100!=0)
    fprintf(fp," %d",year);

    if (year%100==0 && year%400==0)
    fprintf(fp," %d",year);
    
    printf("\nDo you want to continue?");
    dec=getch();
    }while(dec=='Y' || dec=='y');
    fclose(fp);
    getch();
    return 0;
}