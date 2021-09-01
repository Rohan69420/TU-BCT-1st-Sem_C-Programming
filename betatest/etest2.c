#include <stdio.h>
int main(){
    char str[5]="NepaL";
    int n=0,m=1;
    for (int i=0;i<=4;i++){
        for (int j=n;j<5;j++){
            printf(" ");
        }
        for (int k=1;k<=m ;k++){
            printf("%c",str[i]);
        }printf("\n");
        n++;
        m=2*(i+2)-1;
    }
    return 0;
}