#include <stdio.h>
#include <conio.h>
float add(int, float);
int main()
{
    int n;
    float b;
    printf("Enter two values, later one being float ");
    scanf("%d%f",&n,&b);
    printf("The sum is %f",add(n,b));
    getch();
    return 0;
}
float add(int a,float b){
    return(a+b);
}