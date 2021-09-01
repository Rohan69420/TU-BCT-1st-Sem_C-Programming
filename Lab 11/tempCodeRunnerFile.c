#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    int i=0;
    char dec='Y';
    struct Date {
        int dd,mm,yy;
    };
    struct person {
        char name[40],address[40],telephone[10];
        struct Date d;  
    };
    struct person p[99];
    while(dec!='n' || dec!='N'){
        
        printf("\nEnter name: ");
        fflush(stdin);
        scanf("%s",p[i].name);
        printf("\nEnter address: ");
        fflush(stdin);
       scanf("%s",p[i].address);
        printf("\nEnter telephone: ");
        fflush(stdin);
        gets(p[i].telephone);
        printf("\nNow enter your DOB: ");
        printf("\nEnter day");
        scanf("%d",&p[i].d.dd);
        printf("\nEnter month: ");
        scanf("%d",&p[i].d.mm);
        printf("\nEnter year");
        scanf("%d",&p[i].d.yy);
        printf("\nDo you want to continue (y/n)?");
        dec=getch();
        i++;

    }
    for (int j=0;j<=i-1;j++){
        printf("\nName: %s\nAddress: %s\nTelephone: %s\nDate of birth: %d//%d//%d",p[j].name,p[j].address,p[j].telephone,p[j].d.dd,p[j].d.mm,p[j].d.yy);

    }
    getch();
    return 0;
}