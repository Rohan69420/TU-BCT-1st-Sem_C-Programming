#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c,l;
    printf("\nEnter three different integers:");
    scanf("\n%d%d%d",&a,&b,&c);
    if (a>b && a>c){
        l=a;
    }
    else if(b>a && b>c){
        l=b;
    }
    else {
        l=c;
    }
    printf("%d is the largest number",l);
    getch();
}