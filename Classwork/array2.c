#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[5]; //declaring an array
    printf("Enter 5 integers to store in an array");
    for (int i=0;i<=4;i++){
        scanf("%d",&arr[i]); //array write
        
    }
    for (int j=0;j<=4;j++){
        printf("\n arr[%d] is %d",j,arr[j]); //array read
    }
    getch();
    return 0;
}