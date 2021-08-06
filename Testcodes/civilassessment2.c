#include <stdio.h>
#include <conio.h>
void sec_diag(int *,int);
void prime_diag(int *,int);
int main()
{
    int m;
    int matrix[10][10];
    printf("\nEnter the dimension of matrix you want as MxM");
    scanf("%d",&m);
    for (int i=0;i<m;i++)
    for(int j=0;j<m;j++){
        printf("\nEnter the %dth row and %dth column element:",i+1,j+1);    //writing the matrix
        scanf("%d",&matrix[i][j]); 
    }
    sec_diag(&matrix[0][0],m); //updating the secondary diagonal
    prime_diag(&matrix[0][0],m); //updating main diagonal
    for (int i=0;i<m;i++){
        printf("\n");
    for (int j=0;j<m;j++){
        printf("%d\t",*((matrix+i)+j));
    }
    }
    
    getch();
    return 0;
}
void sec_diag(int *p,int m){
    int i=0,j=m;
    for (int run=1;run<=m;run++){   //for secondary diagonal
    printf("%d%d",i,j);
        *((p+i)+j)*=12;
        i++;
        j--;

    }
}
void prime_diag(int *q,int m){  //for main diagonal
    int i=0,j=0;
    for (int run=1;run<=m;run++){
        printf("%d%d",i,j);
        *((q+i)+j)+=14;
        i++;
        j++;
    }

}