#include <stdio.h>
#include <conio.h>
#include <string.h>
//rough program without compensation for the greater one, needs update
struct TIME
{
    int hour, minutes, seconds;
} st1, st2, diff, sum;
void getdiff()
{
    diff.hour = st2.hour - st1.hour;
    diff.minutes = st2.minutes - st1.minutes;
    diff.seconds = st2.seconds - st1.seconds;
}
void getsum()
{
    sum.hour = st2.hour + st1.hour;
    sum.minutes = st2.minutes + st1.minutes;
    sum.seconds = st2.seconds + st1.seconds;
}
int main()
{

    printf("\nEnter the start time in hours, minutes and seconds");
    scanf("%d%d%d", &st1.hour, &st1.minutes, &st1.seconds);
    printf("\nEnter the stop time in hours, minutes and seconds");
    scanf("%d%d%d", &st2.hour, &st2.minutes, &st2.seconds);
    getdiff();
    getsum();
    printf("\nThe difference is %d hours, %d minutes and %d seconds", diff.hour, diff.minutes, diff.seconds);
    printf("\nThe sum is %d hours, %d minutes and %d seconds", sum.hour, sum.minutes, sum.seconds);
    getch();
    return 0;
}