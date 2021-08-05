#include <stdio.h>

int main()
{
    int s, a, b, c = 20;
    printf("Enter value of a:");
    scanf("%d", &a);
    printf("Enter value of b:");
    scanf("%d", &b);
    s = a + b + c;
    printf("Sum=%d", s);
    return 0;
}