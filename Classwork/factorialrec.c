#include <stdio.h>
#include <conio.h>
int fact(int); //function declaration/prototype (return type).
int main()
{
    int n;
    printf("Enter the number whose factorial you want to find.");
    scanf("%d",&n);
    printf("The factorial is %d",fact(n));
    getch();
    return 0;
}
int fact(int a){
    int facto;
    if (a==0)
    facto=1;
    else 
    facto=a*fact(a-1);
    return(facto);
}