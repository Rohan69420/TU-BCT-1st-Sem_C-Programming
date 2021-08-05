#include<stdio.h>
#include<conio.h>
void ascending(int [],int ); //missed function declaration
int main()
{
    int arr[20],n,i;
    printf("enter size of 1d array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter %d element: ",i+1); //added +1 because th element is 1 greater than index
        scanf("%d",&arr[i]); //writing array
    }
    ascending(&arr[0],n);
    
}

void ascending(int *arr, int n)
{
    int temp,i,j;
    for(i=0;i<n-1;i++)
    {
      for(j=0;j<n-1-i;j++)
      {
          if(*(arr+j)>*(arr+j+1))
          {
              temp=*(arr+j+1);
              *(arr+j+1)=*(arr+j);
              *(arr+j)=temp;         
          }
      }
    }
    for(i=0;i<n;i++)
        printf("%d\t",arr[i]);
}