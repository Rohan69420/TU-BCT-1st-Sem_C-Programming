#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    int highest, lowest,l_ad,h_ad,sum=0;
    double average;
    struct employee{
        char name[30];
        char telephone[30];
        long int salary;
    };
    struct employee e[10];
    for (int i=0;i<10;i++){
        printf("\nEnter name: ");
        fflush(stdin);
        gets(e[i].name);
        printf("\nEnter telephone no: ");
        fflush(stdin);
        gets(e[i].telephone);
        printf("\nEnter salary: ");
        scanf("%ld",&e[i].salary);
    }
    highest=e[0].salary;
        lowest=e[0].salary;
    for (int i=0;i<10;i++){
        sum+=e[i].salary;
        if(e[i].salary<lowest){
        lowest=e[i].salary;
        l_ad=i;
        }
        if (e[i].salary>highest){
        highest=e[i].salary;
        h_ad=i;
        }
    }
    printf("\nHighest salary holder: ");
    printf("\nName: %s Telephone: %s Salary %ld",e[h_ad].name,e[h_ad].telephone,e[h_ad].salary);
    printf("\nLowest salary holder: ");
     printf("\nName: %s Telephone: %s Salary %ld",e[l_ad].name,e[l_ad].telephone,e[l_ad].salary);
     average=(float)sum/10;
     printf("\nThe average salary is %f",average);
    getch();
    return 0;
}