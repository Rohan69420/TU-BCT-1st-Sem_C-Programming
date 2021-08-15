#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    fp = fopen("student.txt", "w+");
    struct student
    {
        long int rollno;
        char name[20], address[30], ph_no[15];
    };
    struct student s[99];
    char dec[3], buffer[256], nm[20], ad[30], pn[15];
    long int rn;
    int i = 0;
    if (fp == NULL)
    {
        printf("\nThe file couldn't be opened.");
        exit(1);
    }
    do
    {
        printf("\nEnter roll number: ");
        scanf("%ld", &s[i].rollno);
        printf("\nEnter name: ");
        fflush(stdin);
        gets(s[i].name);
        printf("\nEnter address: ");
        fflush(stdin);
        gets(s[i].address);
        printf("\nEnter phone number: ");
        fflush(stdin);
        gets(s[i].ph_no);
        printf("\nDo you want to continue? (yes,no)");
        gets(dec);
        i++;
    } while (strcmp(dec, "no") != 0);

    for (int j = 0; j < i; j++)
    { //writing to file
        fprintf(fp, "%ld %s %s %s\n", s[j].rollno, s[j].name, s[j].address, s[j].ph_no); //needs space at the end to treat it as a seperate string
    }
    printf("\nRoll no:\tName:\tAddress:\tPhone no:");
    rewind(fp); //DONT FORGET TO REPOSITION POINTER.
    for (int j = 0; j < i; j++)
    { //reading file
        fscanf(fp,"%ld %s %s %s ", &rn, nm, ad, pn);
        printf("\n%ld %s %s %s ", rn, nm, ad, pn);
    }
    fclose(fp);
    getch();
    return 0;
}