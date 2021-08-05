#include <stdio.h>
#include <conio.h>
void main()
{
    float n=123.9876;
    printf("\ncase 1 %f",n);
    printf("\ncase 2 %e",n);
    printf("\ncase 3 %g",n);
    printf("\ncase 4 %15.4f",n);
    printf("\ncase 5 %-15.3f",n);
    printf("\n case 6 %015.4e",n);
    printf("\ncase 7 %.8f",n);
    printf("\ncase 8 %2.2f",n);
    getch();
}