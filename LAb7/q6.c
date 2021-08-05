#include <stdio.h>
#include <conio.h>
void countsDigits(int*,int*); //passing arguments by reference it seems
int main()
{
    unsigned int n;
    int a,b;
    printf("Enter the unsigned integer");
    scanf("%u",&n);
    a=n;
    countsDigits(&a, &b);
    printf("The number of odd and even are %d and %d",a,b);
    getch();
    return 0;
}
void countsDigits(int *a, int *b){
     printf("%d",*a);
     int term;
     int odd=0,even=0;
     do{
         term=*a%10;
         if (term%2==0)
         even++;
         else 
         odd++;
         *a/=10;

     }while(*a>0);
     *a=odd;
     *b=even;
}