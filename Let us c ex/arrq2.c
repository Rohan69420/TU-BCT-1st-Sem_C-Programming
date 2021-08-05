#include <stdio.h>
int disp(int *);
int show(int **);
int main()
{
    int marks[] = {55, 65, 75, 56, 78, 78, 90};
    for (int i = 0; i <= 6; i++)
        disp(&marks[i]);
}

int disp(int *n)
{
    show(&n);
}
int show(int **x)
{
    printf("%d", **x);
}