#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[5], highest, lowest;
    for (int i = 0; i < 5; i++)
    { //writing array
        printf("\nEnter the %dth integer.", i + 1);
        scanf("%d",&arr[i]);
    }
    highest = arr[0];
    lowest = arr[0];
    for (int j = 1; j < 5; j++)
    { //reading and comparing array, skipping initialized element.
        if (arr[j] > highest)
            highest = arr[j];
        if (arr[j] < lowest)
            lowest = arr[j];
    }
    printf("\nThe highest integer is %d\nThe lowest integer is %d",highest,lowest);
    getch();
    return 0;
}