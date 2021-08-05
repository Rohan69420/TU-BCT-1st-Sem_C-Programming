#include <stdio.h>
#include <conio.h>
void main()
{
    int s,a,b;
    float p;
    printf("Address of s is %x",&s);
    printf("\n Address of a is %x",&a);
    printf("\n\n Occupied number of bytes by variable s is %d",sizeof(s));
    printf("\n\n\n Size of a %d",sizeof(p));
    printf("\n\n\n\n Size of a %d",sizeof(1.5));
    printf("\n\n\n\n\n Size of floast data type is %d",sizeof(float));
    getch();
}