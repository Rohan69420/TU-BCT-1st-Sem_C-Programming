#include <stdio.h>
#include <conio.h>
int fact(int);
int power(int,int);
int hcf(int,int);
int sum(int);
int main()
{
    int x,n;
    char choose;
    printf("\nEnter what would you like to do\n1.Find factorial\n2.Find the power raised\n3.Find the HCF\n4.Find sum upto n.");
    choose=getch();
    switch(choose){
        case '1':
        printf("\nEnter the value of n.");
        scanf("%d",&n);
        printf("The factorial is:  %d",fact(n));
        break;
        case '2':
        printf("Enter the value of x and n");
        scanf("%d%d",&x,&n);
        printf("The raised power is %d",power(x,n));
        break;
        case '3':
        printf("Enter two numbers whose HCF you want to find.");
        scanf("%d%d",&x,&n);
        printf("The highest common factor is %d",hcf(x,n));
        break;
        case '4':
        printf("Enter the number whose sum you want to find.");
        scanf("%d",&n);
        printf("The sum is %d", sum(n));
        break;
        default:
        printf("Please enter a valid number");
        break;
    }
    return 0;
}
int fact(int n){
    int fac;
    if ((n==0) || (n==1))
    return(1);
    else 
    return(n*fact(n-1));
}
int power(int a, int b){
    if (b==0)
    return(1);
    else 
    return(a*power(a,b-1));

}
int hcf(int u, int v){
    int hi=(u>v? v:u);
    int hc;
    for (int i=1; i<=hi;i++){
        if ((u%i==0)&&(v%i==0))
        hc=i;
    }
    return(hc);
}
int sum(int n){
    if (n==0)
    return(0);
    else 
    return(n+sum(n-1));
}