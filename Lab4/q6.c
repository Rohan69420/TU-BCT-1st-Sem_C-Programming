#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    float a, b, c, dis;
    printf("Enter the coefficients a,b,c from the equation of the form ax^2+bx+c=0");
    scanf("%f%f%f", &a, &b, &c);
    float front_part = -b / (2 * a);
    dis = (float)pow(b, 2) - 4 * a * c;
    if (dis < 0)
    {
        float last_part = (float)pow(-dis, .5) / (2 * a);
        printf("The roots are imaginary and they are given by:\t %.2f+i%.2f and \t %.2f-i%.2f", front_part, last_part, front_part, last_part);
    }
    else if (dis == 0)
    {
        float last_part = (float)pow(dis, .5) / (2 * a);
        printf("The roots are equal and they are\t %.2f and %.2f", front_part, front_part);
    }
    else if (dis > 0)
    {
        float last_part = (float)pow(dis, .5) / (2 * a);
        printf("The roots are positive and are:\t%f and \t%f", front_part + last_part, front_part - last_part);
    }
    else
        printf("There are no roots");

    getch();
}