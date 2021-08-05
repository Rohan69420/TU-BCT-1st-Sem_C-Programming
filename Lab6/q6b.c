#include <stdio.h>
#include <conio.h>
int main()
{
    int n, fact;
    float s=0.0;
    printf("Enter the number of terms of exp of e^-1 you want to see.");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        
        if (i != 0)
        {
            fact=1;
            for (int j = 1; j <= i; j++) //factorial calculator.
            {
                fact *= j;
            }
        }
        else
            fact = 1;
        if (i%2==0)
        s=s+(float)1/fact;
        if (i%2!=0)
        s=s-(float)1/fact;
    }
    printf("S= %f",s);
    getch();
    return 0;
}