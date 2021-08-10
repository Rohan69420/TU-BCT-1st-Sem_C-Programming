#include <stdio.h>
#include <conio.h>
#include <stdlib.h> //needs this for file and exit
struct person
{
    char name[50];
    char address[30];
    unsigned int phone_no;
}p;
struct student
{
    struct person p;
    unsigned int roll_no;
    char section;
};
int main()
{
    FILE *fp; //declaring file pointer
    int i,n;
    struct student s[12];
    fp=fopen("studentdata.txt","w+");
    if (fp==NULL){
        printf("\nThe file could not be opened.");
        exit(1); //exiting with status 1 : mostly error code
    }
    printf("\nEnter the number of data you want to store.");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nName %s");
        fflush(stdin);
        gets(s[i].p.name);
        printf("\nAddress: ");
        gets(s[i].p.address);
        printf("\nPhone no: ");
        scanf("%u", &s[i].p.phone_no);
        printf("\n Roll no: ");
        scanf("%u", &s[i].roll_no);
        printf("Section");
        fflush(stdin);
        s[i].section = getch();
        fprintf(fp,"%s %s %u %u %c",s[i].p.name,s[i].p.address,s[i].p.phone_no,s[i].roll_no,s[i].section);
    }
    fclose(fp);
    getch();
    return 0;
}