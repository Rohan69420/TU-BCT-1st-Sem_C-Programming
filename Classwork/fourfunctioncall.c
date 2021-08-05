#include <stdio.h>
#include <conio.h>
float add(float, float); //function declaration(prototype) [inside]((return type))
float sub(float, float);
float mul(float, float);
float div(float, float);
int main() 
{
    float a, b;
    char c;
    printf("Enter two operands and the operator");
    scanf("%f%f %c", &a, &b, &c);
    switch (c)
    {
    case '+':
        printf("The addition is %f", add(a, b));
        break;
    case '-':
        printf("The subtraction is %f", sub(a, b));
        break;
    case '*':
        printf("The multiplication is %f", mul(a, b));
        break;
    case '/':
        printf("The division is %f", div(a, b));
        break;
    default:
        printf("Please enter a valid operator");
        break;
    }
    getch();
    return 0;
}
float add(float x, float y) //function definition/body
{
    float sum = x + y;
    return (sum);
}
float sub(float x, float y)
{
    float diff = x - y;
    return (diff);
}
float mul(float x, float y)
{
    float prod = x * y;
    return (prod);
}
float div(float x, float y)
{
    float divi = x + y;
    return (divi);
}