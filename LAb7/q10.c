#include <stdio.h>
#include <conio.h>
//pow nalagaudai garna parxa re
float x_n(float, int); //power taking function
int n_fact(int);       //factorial making function
int main()
{
    float x, sum = 0.0;
    int n;
    printf("Enter the value of x and n");
    scanf("%f%d", &x, &n);
    for (int i = 1; i <= n; i++)
    {
        //printf("\n%f\t%d",x_n(x,2*i-1),n_fact(2*i-1));
        if (i % 2 == 0)
            sum -= (float)(x_n(x, 2 * i - 1) / n_fact(2 * i - 1));
        else
            sum += (float)(x_n(x, 2 * i - 1) / n_fact(2 * i - 1));
    }
    printf("%f", sum);
    getch();
    return 0;
}
float x_n(float term, int pow) //function
{
    if (pow == 1)
    {
        return (term);
    }
    else
    {
        term = term * x_n(term, pow - 1);
    }
}
int n_fact(int n)
{
    if (n == 1)
        return (n);
    else
        n = n * n_fact(n - 1);
}