#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    int roll;
    float score;
};

struct person
{
    char name[25], address[20];
    long long int tele;
    struct student s;
} per[4];

int main()
{
    char nem[25], ad[20],buffer[256];
    long long int tel;
    int rl;
    float scr;
    FILE *fp, *fp1;
    fp = fopen("first.txt", "w+");
    fp1 = fopen("second.txt", "w+");
    for(int i = 0; i < 5; i++)
    {
        printf("\nEnter name: ");
        fflush(stdin);
        gets(per[i].name);
        printf("\nEnter address: ");
        fflush(stdin);
        gets(per[i].address);
        printf("\nEnter telephone no: ");
        scanf("%lld", &per[i].tele);
        printf("\nEnter roll number: "); //student data starts from here
        scanf("%d", &per[i].s.roll);
        printf("\nEnter score: ");
        scanf("%f", &per[i].s.score);
    }
    for (int i = 0; i < 5; i++)
    {
        fprintf(fp, " %s %s %lld ", per[i].name, per[i].address, per[i].tele); //good habit to leave spaces or escape seq at front and end of fprintf ""
    }
    for (int i = 0; i < 5; i++)
    {
        fprintf(fp1, " %d %f\n", per[i].s.roll, per[i].s.score); //writing to second.txt
    }
    fclose(fp1);                     //closing second.txt to open in append mode.
    fp1 = fopen("second.txt", "a+"); //opening in append mode to merge data from first.txt
    rewind(fp);
    rewind(fp1);
    
    for (int i = 0; i < 5; i++) //attempting to copy the data from first.txt into second.txt
    {
        //seeking after every iteration
       // fseek(fp1,(sizeof(int)+sizeof(float)+3),SEEK_CUR); //seeking just before second data and after 1st data
       //seems like doesnt work in append mode,cant risk rewriting in w+ mode either
        fscanf(fp, " %s %s %lld ", nem, ad, &tel);
        fprintf(fp1, " %s %s %lld\n", nem, ad, tel); //copying data to second.txt
    }
    rewind(fp1);
    //for file viewing
    for (int i = 0; i < 5; i++){
        fscanf(fp1, " %d %f\n", &rl, &scr);
        printf(" %d %f\n",rl,scr);
        if (i==4)
        for (int j=0;j<5;j++){
            fscanf(fp1, " %s %s %lld\n", nem, ad, &tel);
            printf(" %s %s %lld\n", nem, ad, tel);
        }
    }
    fclose(fp);
    fclose(fp1);
    return 0;
}