#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[3][3],sum=0;
    for (int i=0; i<3;i++)
    for (int j=0;j<3;j++){
    printf("\nEnter the %dR %dC member of the 2d array",i+1,j+1);
    scanf("%d",&arr[i][j]); //writing the array 
    }
    for (int i=0; i<3;i++)
    for (int j=0; j<3;j++){
        if ((arr[i][j]%7==0) && (arr[i][j]%5!=0))
        sum+=arr[i][j];
    }
    printf("\nThe sum of the numbers in the array divisible by 7 and not by 5 is %d",sum);
    getch();
    return 0;
}