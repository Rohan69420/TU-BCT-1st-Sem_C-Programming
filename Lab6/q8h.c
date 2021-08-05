#include <stdio.h>
#include <conio.h>
int main()
{
    for (int i = 1; i <= 2; i++)
    {
        for (int x = 8; x >= i; x--)
        {
            printf(" ");
        }
        for (int j = 0; j <= 3; j++)
        {
        

        if (i == 2 && j == 0)
        {
        }
        else
            printf("\n%d", j);
        }
        for (int k = 2; k >= 0; k--)
        {

            printf("\n%d", k);
        }
    }
    getch();
    return 0;
}