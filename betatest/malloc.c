#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    //testing to see how malloc works.
    int *arr,n;
    printf("\nEnter the number of terms you want to hold in the array.");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        printf("\n Enter the %dth term.",i+1);
        scanf("%d",arr+i);

    }
    for (int j=0;j<n;j++){
        printf("\t%d",*(arr+j));
    }
    getch();
    return 0;
}