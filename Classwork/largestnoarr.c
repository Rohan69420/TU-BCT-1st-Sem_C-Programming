#include <stdio.h>
#include <conio.h>
int main()
{
    int n,largest;
    printf("Enter the number of terms in the array and the terms of the array.");
    scanf("%d", &n);
    int term[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &term[i]);
        if (term[i] > term[i - 1])
        {
            largest = term[i];
        }
    }
    printf("largest term is %d", largest);
    getch();
    return 0;
}