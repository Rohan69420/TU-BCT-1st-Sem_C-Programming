#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n,arr[50],sum_x=0,sum_x2=0;
    float var,sd;
    printf("\nEnter the number of terms of the array you want to enter.");
    scanf("%d",&n);
    for (int i=0; i<n;i++){
        printf("\nEnter the %dth value of x",i+1); //array read and sum
        scanf("%d",&arr[i]);
        sum_x+=arr[i];
    }
    for (int j=0;j<n;j++){
        sum_x2+=pow(arr[j],2);
    }
    var= (float)sum_x2/n - pow(((float) sum_x/n),2);
    sd= pow(var,.5);
    printf("\nThe variance is %.2f\nThe standard deviation is %.2f",var,sd);     
    getch();
    return 0;
}