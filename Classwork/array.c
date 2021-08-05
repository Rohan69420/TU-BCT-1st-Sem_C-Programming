//wap to store 10 values in an array
#include <stdio.h>
#include <conio.h>
int main()
{
    float arr[10];
    for (int i=0;i<=10;i++){
        scanf("%f",&arr[i]);

    }
    for (int j=0;j<=10;j++){
    printf("%f",arr[j]);
    }
    getch();
    return 0;
}