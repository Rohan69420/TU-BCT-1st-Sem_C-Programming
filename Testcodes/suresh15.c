#include <stdio.h>
#include <conio.h>
int main()
{
    float amt;
    char item;
    printf("Enter the item you bought 'S' for summer item and 'H' for handloom items");
    item=getch();
    switch(item){
        case 'S':
        printf("\nEnter the amount you bought");
        scanf("%f",&amt);
        if ((amt>=0.0) && (amt<=500.0))
        printf("\nNet amount= %f",amt);
        if ((amt>500.0) && (amt<=1000.0))
        printf("\nNet amount= %f",amt*.04);
        if ((amt>1000.0) && (amt<=5000.0))
        printf("\nNet amount= %f",amt*.075);
        if ((amt>5000.0) && (amt<=10000.0))
        printf("\nNet amount= %f",amt*.1);
        if (amt>=10000.0)
        printf("\nNet amount= %f",amt*.1);
        break;

        case 'H':
        printf("\nEnter the amount you bought");
        scanf("%f",&amt);
        if ((amt>=0.0) && (amt<=500.0))
        printf("\nNet amount= %f",amt*.03);
        if ((amt>500.0) && (amt<=1000.0))
        printf("\nNet amount= %f",amt*.05);
        if ((amt>1000.0) && (amt<=5000.0))
        printf("\nNet amount= %f",amt*.085);
        if ((amt>5000.0) && (amt<=10000.0))
        printf("\nNet amount= %f",amt*.09);
        if (amt>=10000.0)
        printf("\nNet amount= %f",amt*.15);
        break;
    }
    getch();
    return 0;
}