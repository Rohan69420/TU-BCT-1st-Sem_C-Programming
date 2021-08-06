#include <stdio.h>
#include <alloc.h>

void main()
{
    int n,i;
    float *address;
    printf("Enter the number of elements:")
    scanf("%d",&n);
    address=(float *)calloc(n,sizeof(float));
    if (address=NULL)
    {
        printf("Memory can not be allocated");
        exit();
    }
    for (i=0;i<n;i++){
        printf("\nAddress of %d block %d",i,(address+i));   
    }
    free(address);
    
    
    
}