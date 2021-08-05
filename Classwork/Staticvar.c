#include <stdio.h>
#include <conio.h>
int static_test(int a){
    static int x;
    x++;
    printf("%d",x);
}
int main()
{
    printf("This is america");
    static_test(1);
    static_test(2);
    static_test(11);
    static_test(99);
    getch();
    return 0;
}