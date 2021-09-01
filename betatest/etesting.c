#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    unsigned int num=123;
    char ch='y';
    float f =12345.12345;
    printf("\n%10i",num);
    printf("\n%3c",ch);
    printf("\n%-10.3f",f);
    printf("%x",41);
    getch();
    return 0;
}