#include <stdio.h>
#include <conio.h>
void main()
{
    float h,m,s,in_month;
    printf("\nEnter time you study C programming per day in hours minutes and seconds:");
    scanf("\n%f%f%f",&h,&m,&s);
    in_month= (float) (h*3600+m*60+s)*30;
    printf("The seconds studied for C programming in a month is: %.2f seconds",in_month);
    getch();
}