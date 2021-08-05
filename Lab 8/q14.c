#include <stdio.h>
#include <conio.h>
int main()
{
    int array[10][10];
    int i,j,m,n;
    printf("\nEnter the dimension of the matrix as mxn");
    scanf("%d%d",&m,&n);
    for (i=0;i<m;i++)
    for (j=0;j<n;j++){
        printf("\nEnter the element at %dth row and %dth column",i+1,j+1); //reading array
        scanf("%d\n",&array[i][j]);
    }
  for (i=0;i<m;i++){
      printf("\n");
    for (j=0;j<n;j++){
      if (i==j)
        printf("\t%c",array[i][j]); //printing array
    }
  }
    getch();
    return 0;
}