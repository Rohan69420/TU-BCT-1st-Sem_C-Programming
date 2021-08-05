#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int n,fact;
    float x,s,sum;
    printf("Enter the value of x and the number of terms you want to see.");
    scanf("%f%d",&x,&n);
    for (int i=0;i<=n;i++){
        fact=1;
        for (int j=1;j<=2*i;j++){
            fact*=j;
        }
        s=(float)pow(x,2*i)/fact;
        //printf("%f/%d ",pow(x,2*i),fact);
        if (i%2==0)
            sum+=s;
        if (i%2!=0)
        sum-=s;
    }
    printf("sum= %f",sum);
    getch();
    return 0;
}