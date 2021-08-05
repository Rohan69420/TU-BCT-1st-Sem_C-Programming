#include <stdio.h>
int main(){
    int a=1,b=3, c;
    printf("We trying the ternary operators here bruh.");
    c= (a==b) ? 7 : ((a<b) ? 5 : 9);
    printf("%d",c);
}