#include <stdio.h>
int main(){
    char str[11]="Programming";
    int start=0,end=10;
    for (int i=0;i<=5;i++){
        for (int j=start;j<=end;j++){
            putchar(str[j]);
        }
        start++,end--;
        putchar('\n');
    }
    return 0;

}