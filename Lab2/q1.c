#include <stdio.h>
#include <conio.h>
void main()
{
    int seconds,min;
    printf("Enter number in seconds:");
    scanf("%d", &seconds);
    min=seconds/60;
    seconds=seconds%60;
    printf("\nMinutes=%d",min);
    printf("\nSeconds=%d",seconds);
    getch();
}