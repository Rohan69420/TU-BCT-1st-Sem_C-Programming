#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int *arr,n,sum=0; //setting up a pointer from where to allocate
    printf("\nEnter the number of terms in the array you want.");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        printf("\nEnter the %dth term",i+1);
        scanf("%d",arr+i); // no need to use ampersand since its address anyway
    }
    //to add corresponding terms;
    for (int i=0;i<(n/2);i++){ //running the loop upto midpoint or near midpoint
    sum+=(*(arr+i)+*(arr+n-i-1));
        
    }
    printf("\nThe sum is: %d",sum);
    getch();
    return 0;
}