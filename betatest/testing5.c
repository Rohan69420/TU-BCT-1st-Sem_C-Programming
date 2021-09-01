#include <stdio.h>
#include <conio.h>
#include <string.h>
int fact(int n){
    if (n==0)
    return 1;
    else 
    return(n*fact(n-1));
}
int main()
{
    int n, result;
    printf("\nEnter the number whose factorial you want to find out ");
    scanf("%d",&n);
    result=fact(n);
    printf("\nThe answer is %d ",result);
    
    getch();
    return 0;
}