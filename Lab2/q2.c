#include <stdio.h>
#include <conio.h>
void main()
{
    int x=5,v;
    v=++x *++x + ++x;
    printf("v=%d,x=%d\n",v,x);
    getch();
}