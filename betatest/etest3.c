#include <stdio.h>
int fib (int n){
    int term=0,terml,p=0;
    if (n==1)
    p==0;
    else{
        terml=term;
        term++;
        for (int i=0;i<n;i++){
             printf("\t%d",terml);
            term+=terml;
            terml=term;
           
        }
        for (int j=2;j<term;j++){
            if (term%2==0)
            p=0;
            if (term%2!=0)
            p=1;
        }
    }
    return p; 
}
int main(){
    int n,q;
    printf("Enter the terms of fibonacci series");
    scanf("%d",&n);
    q=fib(n);
    if (q==0)
    printf("It is not a prime");
    else 
    printf("\nIt is a prime");
}