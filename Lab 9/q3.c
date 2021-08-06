#include <stdio.h>
#include <conio.h>
void main()
{
    float marks[5];
    int i;
    printf("%d",marks);
    printf("Address of different array elements:");
    for (i=0;i<5;++)
    printf("Address of element %d is %u\n",i,&marks[i]);
    getch();
}