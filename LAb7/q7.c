#include <stdio.h>
#include <conio.h>
int findLowest(int, int, int);
int findHighest(int, int, int);
int main()
{
    int a, b, c;
    printf("Enter three integers to compare between them.");
    scanf("%d%d%d", &a, &b, &c);
    printf("\nThe highest integer is: %d", findHighest(a, b, c));
    printf("\nThe lowest integer is: %d", findLowest(a, b, c));
    getch();
    return 0;
}
int findHighest(int x, int y, int z)
{
    int high;
    high = (x > y ? (x > z ? x : z) : (y > z ? y : z));
    return (high);
}
int findLowest(int x, int y, int z)
{
    int low;
    low = (x < y ? (x < z ? x : z) : (y < z ? y : z));
    return (low);
}