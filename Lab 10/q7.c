#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char str[40],temp;
    printf("\nEnter the string you want to arrange");
    gets(str);
    for (int i=0;i<strlen(str);i++)
    for (int j=i+1;j<strlen(str);j++){
        if (str[j]<str[i]){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        }
    }
    printf("\nThe sorted string is %s",str);
    getch();
    return 0;
}