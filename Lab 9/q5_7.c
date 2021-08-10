#include <stdio.h>
#include <stdlib.h> //for malloc
#include <conio.h>
#include <math.h> //for pow
int main()
{
    int *arr,n;
    printf("\nEnter the number of terms you want to add");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        printf("\nEnter the %dth element",i+1);
        scanf("%d",arr+i);
    }
for (int i=0;i<n;i++){
    *(arr+i)=pow(*(arr+i),3);
    printf("%d\t",*(arr+i));

}
    getch();
    return 0;
}