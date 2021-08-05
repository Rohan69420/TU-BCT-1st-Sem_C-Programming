#include <stdio.h>
#include <conio.h>
int main()
{
    for(int j=1;j<=8;j++){
        printf("\n");
        for (int i=1;i<=8;i++){
            if ((i+j)%2==0)
            printf("\xdb\xdb\xdb");
            if ((i+j)%2!=0)
            printf("   ");
            
        }

    }
    getch();
    return 0;
}