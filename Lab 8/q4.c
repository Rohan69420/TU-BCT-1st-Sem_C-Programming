#include <stdio.h>
#include <conio.h>
int main()
{
    int sum=0,n;
    printf("\nEnter the number of terms of an array you want to enter.");
    scanf("%d",&n);
    int arr[n];
    for (int x=0;x<n;x++){
        printf("\nEnter the %dth term: ",x); //scanning
        scanf("%d",&arr[x]);
    }
    for (int i=0;i<((int) n/2);i++){ // condition with the middle in odd position not considered as corresponding.
    sum=sum+arr[i]+arr[n-i-1]; //n-i-1 important since if it is 6 then the end would be 5 and if not -1 then it'll be at 6
    }
    printf("\n The sum is: %d",sum); //garbage values causing issues
    getch();
    return 0;
}