#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
struct data
{
    float kb, by, bi;
} d_add, d_subt, d1, d2;
void add()
{
    d_add.kb = d1.kb + d2.kb;
    d_add.by = d1.by + d2.by;
    d_add.bi = d1.bi + d1.bi;
    while (d_add.bi > 8.0)
    {
        d_add.bi -= 8;
        d_add.by++;
    }
    while (d_add.by > 1024.0)
    {
        d_add.by -= 1024;
        d_add.kb++;
    }
    printf("\nAdded: %f kb , %f bytes and %f bits",d_add.kb,d_add.by,d_add.bi);
}

void subtract()
{
    d_subt.kb =  fabs(d1.kb - d2.kb);
    d_subt.by = fabs(d1.by - d2.by);
    d_subt.bi = fabs(d1.bi - d1.bi);
    printf("%f%f%f",d_subt.kb,d_subt.by,d_subt.bi);
    while (d_subt.bi > 8.0)
    {
        d_subt.bi -= 8;
        d_subt.by++;
    }
    while (d_subt.by > 1024.0)
    {
        d_subt.by -= 1024;
        d_subt.kb++;
    }
    printf("\nAdded: %f kb , %f bytes and %f bits",d_subt.kb,d_subt.by,d_subt.bi);
}
 

int main()
{
    int n;
    printf("\nEnter memory 1 in kb, byte and bit: ");
    scanf("\n%f%f%f", &d1.kb, &d1.by, &d1.bi);
    printf("\nEnter memory 2 in kb,byte and bit: ");
    scanf("\n%f%f%f", &d2.kb, &d2.by, &d2.bi);
    printf("Enter 1 to add, enter 2 to subtract: ");
    scanf("%d",&n);
    switch(n){
        case 1:
        add();
        break;

        case 2:
        subtract();
        break;

        default:
        printf("\nPlease run the program again and enter a valid number.");
        break;
    }
    getch();
    return 0;
}