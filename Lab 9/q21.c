#include <stdio.h>
#include <conio.h>
void find_larger(int *,int *);
int main()
{
    int a,b;
    printf("\nEnter any two numbers");
    scanf("%d%d",&a,&b);
    find_larger(&a,&b);
    printf("\nThe larger number is: %d",a);
    getch();
    return 0;
}
void find_larger(int *p,int*q){
    if (*p<*q)
    *p=*q;
}