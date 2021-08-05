#include <stdio.h>
#include <math.h>
int function(int);
int main(){
    int x=12;
    printf("The value to be passed: %d",x);
    printf("\nReturned %d",function(x));
    return 0;
}
int function(int y){
    printf("\nThe value that was passed: %d",y);
    int new=sqrt(y);
    return new;
}