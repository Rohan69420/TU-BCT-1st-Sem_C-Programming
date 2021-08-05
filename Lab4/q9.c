#include <stdio.h>
#include <conio.h>
void main()
{
    float a, b;
    char op;
    printf("Enter two numbers:\t");
    scanf("%f%f", &a, &b);
    printf("\nEnter an operator:\t");
    scanf(" %c", &op);
    switch (op)
    {
    case '+':
        printf("Output: %.2f", a + b);
        break;
    case '-':
        printf("Output: %.2f", a - b);
        break;
    case '*':
        printf("Output: %.2f", a * b);
        break;
    case '/':
        printf("Output: %.2f", a / b);
        break;
    default:
        printf("Invalid operator");
        break;
    }
    getch();
}