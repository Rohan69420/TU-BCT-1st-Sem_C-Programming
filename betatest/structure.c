#include <stdio.h>
#include <conio.h>
struct students {
    //define structure outside main if you want it to be accessible all around.
    char name[20];
    int roll_no;
    float marks;
};
int main()
{
    struct students s[4];
    int i;
    for (i=0;i<4;i++){
        printf("\nEnter name of %dth student",i+1);
        fflush(stdin);
        gets(s[i].name);
        printf("\nEnter roll number of %dth student",i+1);
        scanf("%d",&s[i].roll_no);
        printf("\nEnter marks of %dth student",i+1);
        scanf("%f",&s[i].marks);
        
    }
    for (i=0;i<4;i++){
        printf("\n%s\n%d\n%f",s[i].name,s[i].roll_no,s[i].marks);
    }

    getch();
    return 0;
}