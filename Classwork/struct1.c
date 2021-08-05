#include<stdio.h>
#include<conio.h>
    struct std
    {
        int rollno;
        char name[25];
        char sec;
        float marks;
    };
void main()
{
    struct std s[3];
    int i;
    for (i=0 ; i<3 ; i++)
    {
    printf("Enter name= ");
    scanf("%[^'\n']",s[i].name);
    printf("Enter roll no.= ");
    scanf("%d",&s[i].rollno);
    printf("Enter sec= ");
    scanf(" %c",&s[i].sec);
    printf("Enter marks= ");
    scanf("%f",&s[i].marks);
    printf("\n");
    }
    for ( i = 0; i < 3; i++)
    {
        printf("\nName: %s \nRoll: %d \nsec: %c \nMarks= %.2f\n\n",s[i].name,s[i].rollno,s[i].sec,s[i].marks);
    }
    
    getch();
}