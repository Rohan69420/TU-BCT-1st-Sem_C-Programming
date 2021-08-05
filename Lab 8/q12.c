#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, num[3][3];
    printf("Enter member of array");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &num[i][j]);
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            printf("%d", num[i][j]);
    getch();
}