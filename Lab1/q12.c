#include <stdio.h>
#include <conio.h>
void main()
{
    char name[40];
    int age;
    printf("Enter your name and your age:");
    gets(name);
    scanf("\n%d",&age);
    printf("\n Your name: %s\n Your age: %d years",name,age);
    getch();
}