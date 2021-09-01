#include <stdio.h>
#include <conio.h>
#include <string.h>
int gcd(int n1, int n2){
    if (n1==0)
    return n2;
    if (n2==0)
    return n1;
    if (n1>n2)
    return gcd(n1%n2,n2);
    if (n1<n2)
    return gcd(n1,n2%n1);
}
int main()
{
    int a,b;
    printf("\nEnter two numbers to find their HCF");
    scanf("%d%d",&a,&b);
    printf("\nThe highest common factor is %d",gcd(a,b));
    getch();
    return 0;
}