#include <stdio.h>
#include <conio.h>
void main()
{
    int a=12345;
    printf("\ncase 1 %d",a);
    printf("\ncase 2 %i",a);
    printf("\ncase 3 %15d",a);
    printf("\ncase 4 %-15d",a);
    printf("\ncase 5 %015d",a);
    printf("\ncase 6 %-+15d",a);
    printf("\ncase 7 %3d",a);
    getch();
}