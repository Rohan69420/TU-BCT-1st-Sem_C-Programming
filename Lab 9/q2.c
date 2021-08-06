#include <stdio.h>
#include <conio.h>
void main()
{
    int *p,*q;
    int a,b;
    p=&a;
    q=&b;
    printf("Address of a=%u\n",&a);
    printf("Address of b=%u\n",&b);
    printf("Value of p=%u\n",p);
    printf("Value of q=%u\n",q);
    printf("Enter value of a and b:");
    scanf("%d%d",&a,&b);
    printf("The value pointed by p is %d\n",*p);
    printf("The value pointed by q is %d\n",*q);
    printf("a+b=%d\n",a+b);
    printf("*p+*q=%d",*p+*q);
    getch();
    }