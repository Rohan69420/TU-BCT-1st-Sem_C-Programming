#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    int i,n;
    struct member{
        char Name[30];
        char Address[30];
        long long int Tele;
        long int Salary;
    };
  
printf("\nEnter the number of members");
scanf("%d",&n);
  struct member m[n];
  for (i=0;i<n;i++){
      printf("\nEnter name: ");
      fflush(stdin);
      gets(m[i].Name);
      printf("\nEnter address: ");
      fflush(stdin);
      gets(m[i].Address);
      printf("\nEnter telephone number");
      scanf("%lld",&m[i].Tele);
      printf("\nEnter Salary");
      scanf("%ld",&m[i].Salary);
  }
   for (i=0;i<n;i++){
       printf("\n %s %s %lld %ld",m[i].Name,m[i].Address,m[i].Tele,m[i].Salary);
   }
    getch();
    return 0;
}