#include <stdio.h> 
#include <conio.h>
#include <string.h>
int main()
{
    char temp[20],temp1[20];
    struct names {
        char name[20];
    };
    struct names n[10];
    for (int i=0;i<10;i++){
        printf("\nEnter the name of %dth student",i+1);
        fflush(stdin);
        gets(n[i].name);

    }
    //sorting names
    for (int i=0;i<10;i++)
    for (int j=i+1;j<10;j++){
        if (n[i].name[0]>n[j].name[0]){
            strcpy(temp,n[j].name);
            strcpy(n[j].name,n[i].name);
            strcpy(n[i].name,temp);
        }
    }
     printf("\n In order: ");
     for (int i=0;i<10;i++)
    printf("\n%s",n[i].name);
    getch();
    return 0;
}