#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 
struct student {
        int roll;
        char name[20];
        char ad[20];
        long int ph;
    }s[20];
int main()
{
    int temproll; //for display only
    long int tempno;    //for display only
    char tempname[20],tempad[20];   //for display only
   int rl;
   char nm[30],adr[30];
   long int pho;
    FILE *fp;
    char ans;
    int i = 0;

    fp = fopen("student.txt", "w+"); //changed w to w+ since we want to read the contents at the end.
    if (fp == NULL)
    { //error handling if file couldn't be opened
        printf("\nFile couldn't be opened");
        exit(1);
    }
    fprintf(fp, "\nRoll no.\t\t\tName\t\t\tAddress\t\t\tPhone number\n"); 
    do
    {
        printf("enter roll: ");
        scanf("%d", &s[i].roll);
        printf("enter name: ");
        fflush(stdin); //clearing input buffer because we dont want any unwanted error due to mistype
        gets(s[i].name);
        printf("enter address: ");
        fflush(stdin); //clearing input buffer because we dont want any unwanted error due to mistype
        gets(s[i].ad);
        printf("enter phone number: ");
        scanf("%ld", &s[i].ph);
        printf("do you want to enter more data?  (y/n) :");
        fflush(stdin); //clearing input buffer because we dont want any unwanted error due to mistype
        scanf(" %c", &ans);
        i++;
    } while (ans != 'n');
    for (int j=0;j<i;j++){ //not sure if =i,because there is post increment in last but it must be <i in my thinking
  /* printf("%d",s[j].roll);
   printf("%s",s[j].name);
   printf("%s",s[j].ad);
   printf("%ld",s[j].ph);*/
    fprintf(fp, "\n%d\t\t\t%s\t\t\t%s\t\t\t%ld\n", s[j].roll, s[j].name, s[j].ad, s[j].ph); //added new line to not get compiler confused
       // printf(fp, "\n%d\t\t\t%s\t\t\t%s\t\t\t%ld", s[i].roll, s[i].name, s[i].ad, s[i].ph); //dont know the intention of this
       //fprintf ra printf ko syntax mixed xa, i think print garna khojeu but i made a seperate loop of that
    }
    //Now we need to get the contents of the file.
    rewind(fp); //rewinding pointer to start of file
    fseek(fp,43,0); //IMPORTANT: OFFSETTING POINTER TO SKIP THE HEADING THAT WE PRINTED TO FILE
     
    for (int x=0;x<i;x++)
    {
        fscanf(fp, " %d %s %s %ld ", &rl,nm,adr,&pho);
     //for display only
        printf("\n%d\t\t\t%s\t\t\t%s\t\t\t%ld",rl, nm,adr,pho);
    }
    fclose(fp);
    getch();
    return 0;
}