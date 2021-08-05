#include <stdio.h>
#include <conio.h>
int func(int,int);
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    printf("%d",func(x,y));
    getch();
    return 0;
}
int func(int x,int y){
    int pow;
    if (y!=0)
    return (x*func(x,y-1));
    if (y==0)
    return(1);
}