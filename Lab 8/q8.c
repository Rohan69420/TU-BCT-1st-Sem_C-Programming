#include <stdio.h>
#include <conio.h>
#include <math.h>
int astg_chkr(unsigned int [], unsigned int);
int main()
{
    int n,arr[100];
    printf("\nEnter the number of terms of an array you want to enter.");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        printf("\nEnter the %dth term",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nThe number of armstrong numbers in the array you entered is %d",astg_chkr(arr,n));
    getch();
    return 0;
}
int astg_chkr(unsigned int *p, unsigned int tot)
{
    int a_count = 0;
    for (int c = 0; c < tot; c++)
    {
        int i = 0, sum = 0, temp, u_n =  *(p+c),n=*(p+c); //might need to pass an array i guess
        do
        { //length checker.
            n /= 10;
            i++;
        } while (n != 0);
        n = u_n;
        for (int x = 1; x <= i; x++)
        {
            temp = u_n % 10;
            sum = sum + pow(temp, i); //armstrong checker
            u_n /= 10;
        }
        if (n == sum)
            a_count++; //armstrong counter
    }
    return(a_count);
    }