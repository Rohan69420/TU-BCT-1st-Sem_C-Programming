#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr,n,temp,largest;
    printf("\nEnter the nmber of terms in an array that you want.");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        printf("\nEnter the %dth element: ",i+1);
        scanf("%d",arr+i);
    }
    temp=*arr,largest=*arr;
    for (int j=0;j<n;j++){
        for (int k=0;k<n;k++){
        if (*(arr+j)>largest){
            temp=largest;
            largest=*(arr+j);
        }
        }
    }
    printf("\nThe second largest number is %d",temp);
    return 0;
}