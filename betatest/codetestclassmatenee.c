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
   
    FILE * fpt;
    char ans;
    int i = 0;

    fpt = fopen("student.txt", "w+"); //changed w to w+ since we want to read the contents at the end.
    if (fpt == NULL)
    { //error handling if file couldn't be opened
        printf("\nFile couldn't be opened");
        exit(1);
    }
    fprintf(fpt, "\nRoll no.\t\t\tName\t\t\tAddress\t\t\tPhone number\n"); 
    do
    {
        printf("enter roll: ");
        scanf("%d", &s.roll);
        printf("enter name: ");
        fflush(stdin); //clearing input buffer because we dont want any unwanted error due to mistype
        gets(s.name);
        printf("enter address: ");
        fflush(stdin); //clearing input buffer because we dont want any unwanted error due to mistype
        gets(s.ad);
        printf("enter phone number: ");
        scanf("%ld", &s.ph);
        printf("do you want to enter more data?  (y/n) :");
        fflush(stdin); //clearing input buffer because we dont want any unwanted error due to mistype
        scanf(" %c", &ans);
        i++;
    } while (ans != 'n');
    for (int j=0;j<i;j++){ //not sure if =i,because there is post increment in last but it must be <i in my thinking
   printf("%d",s.roll);
   printf("%s",s.name);
   printf("%s",s.ad);
   printf("%ld",s.ph);
    fprintf(fpt, "\n%d\t\t\t%s\t\t\t%s\t\t\t%ld", s[i].roll, s[i].name, s[i].ad, s[i].ph);
        printf(fpt, "\n%d\t\t\t%s\t\t\t%s\t\t\t%ld", s[i].roll, s[i].name, s[i].ad, s[i].ph); //dont know the intention of this
       //fprintf ra printf ko syntax mixed xa, i think print garna khojeu but i made a seperate loop of that
    }
    //Now we need to get the contents of the file.
    rewind(fpt); //rewinding pointer to start of file
     
   /* while(fscanf(fpt,"%d%s%s%ld",&temproll,tempname,tempad,&tempno)!=EOF){  //for display only
        printf("\n%d\t\t\t%s\t\t\t%s\t\t\t%ld",temproll,tempname,tempad,tempno);
    }*/
    fclose(fpt);
    getch();
    return 0;
}