//wap a program that asks two operators and performs two operations on the operands
#include <stdio.h>
#include <conio.h>
int main(){
    char op;
    int a,b;
    printf("Enter two numbers");
    scanf("\n%d%d",&a,&b);
    printf("enter the operator");
    scanf("\n %c",&op); //add one space infront of c because enter is also a character
    if (op=='+'){
        printf("Sum is : %d",a+b);
    }
    else if (op=='-'){
        printf("Difference is: %d",a-b);
    
    }
    else{
        printf("operator unspecified");
    }
}