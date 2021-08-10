#include <stdio.h>
#include <stdlib.h> //stdlib header for malloc
#include <conio.h>
int func(int *arr,int n){
    int temp;
    for (int i=0;i<n;i++)
    for(int j=i+1;j<n;j++){
   //lets try decending    
        if (*(arr+j)>*(arr+i)){
            temp=*(arr+i);
            *(arr+i)=*(arr+j);
            *(arr+j)=temp;

        }
    }
}
int main()
{
    int *arr,n;
    printf("\nEnter the number of terms that you want to enter.");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        printf("\nEnter the %dth term",i+1);
        scanf("%d",arr+i);
    }
    func(arr,n);
    printf("\nIn descending order");
    for (int i=0;i<n;i++){
        printf("%d\t",*(arr+i));
    }
    getch();
    return 0;
}