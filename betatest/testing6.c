#include <stdio.h>
#include <conio.h>
#include <string.h>
long int rec_sum(long int n){
    if (n==0)
    return 0;
    else 
    return(n%10+rec_sum(n/10));
}
int main()
{
    long int x,ans;
    printf("\nEnter a 5 digit number");
    scanf("%ld",&x);
    ans=rec_sum(x);
    printf("\nThe sum of digits is: %ld",ans);
    getch();
    return 0;
}