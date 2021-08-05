#include <stdio.h>
#include <conio.h>
void lar_smal(int [], int);
int main()
{
    int n,arr[10];
    printf("Enter the number of terms [max 10] in the array you want to enter.");
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        printf("\nEnter %d term:",i+1);
        scanf("%d",&arr[i]); //array write
    }
    lar_smal(&arr[0],n);
    getch();
    return 0;
}
void lar_smal(int *x, int n){
    int largest=*x,smallest=*x;
    for (int j=1;j<=n;j++){
        if (*x>largest)
        largest=*x;
        if (*x<smallest)
        smallest=*x;
        x++;
    }
    printf("\nThe largest number in array is = %d",largest);
    printf("\nThe smallest number in the array is = %d",smallest);
}