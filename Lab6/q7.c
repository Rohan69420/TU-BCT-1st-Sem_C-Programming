#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n, fact, i = 0;
    double s = 0,sum=0;
    float x;
    int out;
    printf("Enter the value of x less than 1");
    scanf("%f", &x);
    if (x < 1)
    {
        do
        {
            fact = 1;
            for (int j = 1; j <= i; j++)
            { //factorial calculator
                fact *= j;
            }
            //printf("%f/%d ", pow(x, i), fact);
            s = (double)pow(x, i) / fact;
            sum += s;
            //printf("%lf ", s); //going upto .5 //Testing value of s
            if (s * pow(10, 6) > 1.0) //if value less than 10^-6, it'll be less than 1 after multiply 
                out = 0;
            else //condition for exist
             out=1;
            i++;
        } while (out == 0);
        printf("S=%lf", sum);
        getch();
        return 0;
    }
    else
    {
        printf("You did not enter a number less than 1.");
    }
}