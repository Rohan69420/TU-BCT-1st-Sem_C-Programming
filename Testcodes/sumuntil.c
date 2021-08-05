#include <stdio.h>
#include <conio.h>
void main()
{
    int sum=0,temp,n;
    do {
        printf("Enter a positive integer:");
        scanf("\n%d",&n);
        temp=sum;
        sum=sum+n;
    }
while (sum<=1000);
    
    printf("The sum is: %d",temp);
    getch();
}