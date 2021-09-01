#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    int n1,n2;
    printf("Enter the start and end range");
    scanf("%d%d",&n1,&n2);
    for (int i=n1;i<n2;i++){
        printf("%c\t",i);
    }
    getch();
    return 0;
}