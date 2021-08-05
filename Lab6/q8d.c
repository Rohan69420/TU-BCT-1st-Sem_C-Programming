#include <stdio.h>
#include <conio.h>
int main()
{
    char dat[5] = "ABCDE";
    for (int i = 1; i <= 5; i++)
    {
        printf("\n");
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 5!=0 )
                printf("%c ", dat[j - 1]); //subtracting one because index starts from zero

            else
                printf("%c ", dat[j - 1] + 32);
        }
    }
    getch();
    return 0;
}