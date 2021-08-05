#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    printf("We out here testing the goto statement in here");
    int i = 1;
tag:
    i += 1;
    if (i == 5)
    {
        goto getouttahere;
    }
    goto tag;
getouttahere:
    printf("\nValue if i is %d", i);
    getch();
    return 0;
}