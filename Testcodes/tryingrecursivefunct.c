#include <stdio.h>
#include <conio.h>
#include <math.h>
int recur(int i);
//heart of the function
//must be in a loop
int main()
{
    int n = 5;
    long long int x;
    recur(n);
    return 0;
    
}
int recur(int n)
{
    int swi,i;
    if (swi==0){
        i=0;
        swi=1;
    }
    x += pow(10, i) + 1;
    printf("%d+", x);
    if (i != n)
    {
        recur(i++);
    }

    //1+11+111+1111
