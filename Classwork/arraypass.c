#include <stdio.h>
#include <conio.h>
int funct(int []);
int main()
{
    int arr[10];
    printf("\nThis is a test to see if the array can be passed properly");
    for (int i=0; i<10;i++){
        printf("\nEnter the %dth term of the array",i+1);
        scanf("%d",&arr[i]);
    }
    funct(arr);
    getch();
    return 0;
}
int funct(int arr[]){
    for (int i=0;i<10;i++){
        printf("\n%d",arr[i]);
    }
    return 0;
}