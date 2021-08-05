#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int arr[50],n;
    printf("\nEnter the number of terms you want to enter");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        printf("\nEnter the %dth element",i+1);
        scanf("%d",&arr[i]);
    }
    for (int j=0;j<n;j++){
        arr[j]=pow(arr[j],3);
    }
    for (int k=0;k<n;k++){
        printf("%d\t",arr[k]);
    }
    getch();
    return 0;
}