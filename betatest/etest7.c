#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr,n,temp;
    printf("\nEnter no of terms: ");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        printf("\nEnter the %dth term",i+1);
        scanf("%d",arr+i);
    }
    for (int j=0;j<n;j++){
        for (int k=j+1;k<n;k++){
            if (*(arr+j)<*(arr+k)){
                temp=*(arr+j);
                *(arr+j)=*(arr+k);
                *(arr+k)=temp;
            }
        }
    }
    for (int i=0;i<n;i++)
    printf("\t%d",*(arr+i));
    printf("\nThe second largest number is: %d",*(arr+1));
    return 0;
}