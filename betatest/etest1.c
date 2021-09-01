#define MAX 5
#include <stdio.h>
int main(){
    int casee[MAX]={2,3,5,4,10},i,sum=0;
    float average;
    for (i=0;i<MAX;i++){
        printf("Case %d=%3.2d\n",i+1,casee[i]);
        sum+=*casee+i;
    }
    average=sum/MAX;
    printf("%06.2f",average);
    return 1;
}