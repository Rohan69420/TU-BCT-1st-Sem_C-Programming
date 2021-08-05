#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int a,b;
    char op;
    printf("Enter two numbers:\n");
    scanf("\n%d%d",&a,&b);
    printf("Enter an operator\n");
    scanf("\n %c",&op); //adding a space so that enter button is not accepted as the character 
    switch(op)
    {
        case '+':
        printf("You have chosen sum, which is: %d",a+b);
        break;

        case '-':
        printf("You have chosen difference, which is: %d",a-b);
        break;

        case '*':
        printf("You have chosen multiply, which is: %d",a*b);
        break;
        
        default:
        printf("Your operator was not in our list");
        break;

    }
    getch();
    return 0;
}