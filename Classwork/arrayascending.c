#include <stdio.h>
#include <conio.h>
int main()
{
    int num[100],i,j,term,n;
    printf("Enter the number of terms of the array that you want to enter.");
    scanf("%d",&n);
    for (int i=0;i<n;i++){ //terms entering mechanism.
        printf("Enter the term of the array.");
        scanf("%d",&num[i]);

    }
    for (int j=0;j<n;j++){
        for (int x=j+1;x<n;x++){
            if (num[x]<num[j]){
                term=num[j];
                num[j]=num[x];
                num[x]=term;
            }
        }
        
    }
    for (int y=0;y<n;y++){
    printf("%d",num[y]);
    }
    getch();
    return 0;
}