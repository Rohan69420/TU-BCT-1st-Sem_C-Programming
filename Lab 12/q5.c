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
    fp = fopen("first.bin", "wb+");
    fp1 = fopen("second.bin", "wb+");
    for (int i = 0; i < 5; i++)
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
        
        fwrite(&per[i],sizeof(per[i]),1,fp);
        }
    for (int i = 0; i < 5; i++)
    {
        
        fwrite(&per[i].s,sizeof(per[i].s),1,fp); //writing to second.txt
    }
    fclose(fp1);                     //closing second.txt to open in append mode.
    fp1 = fopen("second.txt", "ab+"); //opening in append mode to merge data from first.txt
    rewind(fp);
    rewind(fp1);
    
    for (int i = 0; i < 5; i++) //attempting to copy the data from first.txt into second.txt
    {
        //seeking after every iteration
       // fseek(fp1,(sizeof(int)+sizeof(float)+3),SEEK_CUR); //seeking just before second data and after 1st data
       //seems like doesnt work in append mode,cant risk rewriting in w+ mode either
        fread(&per[i],sizeof(per[i]),1,fp1);
        fwrite(&per[i],sizeof(per[i]),1,fp1); //copying data to second.txt
    }
    rewind(fp1);
    for (int i = 0; i < 5; i++){
        fread(&per[i],sizeof(per[i].s), 1, fp1);
        printf(" %d %f\n",per[i].s.roll,per[i].s.score);
            fread(&per[i],sizeof(per[i]), 1,fp1);
            printf(" %s %s %lld\n",per[i].name,per[i].address,per[i].tele);
        } //a little unexpected behaviour
    fclose(fp);
    fclose(fp1);
    return 0;
}