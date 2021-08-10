#include <stdio.h>
#include <conio.h>
int main(){
    int i,arr[5],sum=0;
    for (i=0;i<5;i++){
        printf("\nEnter the %dth term of the array.",i+1);
        scanf("%d",(arr+i));
    }
    for (i=0;i<5;i++){
        if ((*(arr+i)%10==0) && (*(arr+i)%15!=0)){
            sum+=*(arr+i);
        }
    }
    printf("\nThe sum of numbers divisible by 10 and not by 15 is %d",sum);
    getch();
    return 0;
}