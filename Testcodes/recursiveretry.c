#include <stdio.h>
#include <conio.h>
#include <math.h> //header fine shenanigans
// turns out that you could use loop in recursive function
long long int new;
int funct(int);
int main(){
     int n;
    printf("Enter a number\n");
    scanf("\n%d",&n);
    long long int term=0;
    for (int i=1; i<n ;i++){
        new=funct(i);
        printf("%lld",new);
        if (i!=(n-1)){
            printf(" + ");
        }
    }
    printf("%lld",term);
}
int funct(int y){
    long long int term=0;
    for (int i=0; i<y ;i++){
        term=term+pow(10,i);
    }
    return term;
}