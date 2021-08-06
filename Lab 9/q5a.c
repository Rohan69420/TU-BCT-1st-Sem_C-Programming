#include <stdio.h>
#include <conio.h>
void main()
{
    int i, num[6]={4,5,3,2,15};
    for (i=0;i<6;i++){
        printf("%d",*(num+i));
    }
    getch();
}