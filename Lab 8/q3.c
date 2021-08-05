#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[5], sum = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter the %dth term of array: ", i+1);
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < 5; j++)
    {
        if ((arr[j] % 10 == 0) && (arr[j] % 15 != 0))
            sum += arr[j];
    }
    printf("\n The sum of the numbers divisible by 10 and not by 15 in the array are: %d", sum);
    getch();
    return 0;
}