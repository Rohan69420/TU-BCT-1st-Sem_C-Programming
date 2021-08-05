#include <stdio.h>
#include <conio.h>
int main()
{
    int array[3][3], highest, lowest;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            printf("\nEnter the %dth row and %dth column element.",i+1,j+1);
            scanf("%d", &array[i][j]); //writing the array
        }
    highest = array[0][0];
    lowest = array[0][0];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            if (highest < array[i][j])
                highest = array[i][j];
            if (lowest > array[i][j])
                lowest = array[i][j];
        }
    printf("\nThe highest numeber is %d\nThe lowest number is %d", highest, lowest);

    getch();
    return 0;
}