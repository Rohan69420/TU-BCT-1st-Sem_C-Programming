#include <stdio.h>
#include <conio.h>
int main()
{
    char name[5]="NEPAL";
    for (int i=1;i<=5;i++){
        printf("\n");
        for (int j=1;j<=i;j++){
            printf("%c ",name[i-1]);
        }
    }
    getch();
    return 0;
}