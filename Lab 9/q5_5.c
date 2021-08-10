#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[5],i,high,low;
    for (i=0;i<5;i++){
        printf("\nEnter the %dth term",i+1);
        scanf("%d",arr+i);
    }
    high=*arr;
    low=*arr;
    for (i=0;i<5;i++){
        if (*(arr+i)>high)
        high=*(arr+i);
        if (*(arr+i)<low)
        low=*(arr+i);
    }    
    printf("\nThe highest number is %d\nThe lowest number is %d",high,low);
    
    getch();
    return 0;
}