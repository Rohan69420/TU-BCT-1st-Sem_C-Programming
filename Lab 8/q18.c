#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float array[4][4];
    for (int i=0;i<4;i++)
    for (int j=0;j<4;j++){
        array[i][j]=pow(3,-(i+j+2)); //writing array
    }
    for (int i=0;i<4;i++){
        printf("\n");
    for (int j=0;j<4;j++){
        printf("\t%f",array[i][j]);
        }
}
    getch();
    return 0;
}