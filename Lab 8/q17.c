#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int array[10][10],m,n;
    printf("\nEnter the dimension of the array as mxn");
    scanf("%d%d",&m,&n);
    for (int i=0;i<m;i++)
    for (int j=0;j<n;j++){
        printf("\nEnter the %dth row and %dth column element",i+1,j+1);
        scanf("%d",&array[i][j]);   //writing the array.
        
    }
    for (int i=0;i<m;i++)
    for (int j=0;j<n;j++){
        array[i][j]=pow(array[i][j],5); //power raising.
        
    }
    for (int i=0;i<m;i++){
        printf("\n");
    for (int j=0;j<n;j++){
        printf("\t%d",array[i][j]);
        
    }
    }
    getch();
    return 0;
}