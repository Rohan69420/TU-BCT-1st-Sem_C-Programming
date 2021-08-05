#include <stdio.h>
#include <conio.h>
void main()
{
    int boys,girls;
    printf("\nEnter the number of boys and number of girls in the class:");
    scanf("\n%d%d",&boys,&girls);
    printf("\nThe ratio of girls to boys is: %d:%d",girls,boys);
    getch();
}