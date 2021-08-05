#include <stdio.h>
int func(int [],int);
int main()
{
    int arr[100], n, i ;

    printf("Enter the number of elements you want to insert : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    func(arr,n);

   
    return 0;
}
int func(int arr[],int n){
    int  i, small, large;
     small = arr[0];
    large = arr[0];

    for (i = 1; i <= n; i++)
    {
        if (arr[i] < small)
        {
            small =arr[i];
        }
        
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }

    printf("\nLargest element is : %d", large);
    printf("\nSmallest element is : %d", small);


}