#include <stdio.h>
#include <conio.h>
void processMatrix(int [][], int [][]);
void showMatrix(int [][], int [][]);
void readMatrix(){
    //program probably needs debugging and testing
    int m, n, p, q, arra[10][10], arrb[10][10],contemp_term;
    printf("\nEnter the dimension of the matrix A as mxn and B as pxq");
    scanf("%d%d%d%d", &m, &n, &p, &q);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            printf("\nEnter the %dth row and %dth column term");
            scanf("%d", &arra[i][j]); //writing matrix a
        }
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
        {
            printf("\nEnter the %dth row and %dth column term");
            scanf("%d", &arrb[i][j]); //writing matrix b
        }
    if (n != p)
        printf("\nThe matrix multiplication is not possible.");
    else{
        processMatrix(arra,arrb);
    }
    
}

int main()
{ 
    readMatrix();
    getch();
    return 0;
}
void processMatrix(int arra[][],int arrb[][]){
     //here comes the matrix multiplication bit. 
        for (int i=0;i<m;i++){ //confused if the upper limit must be q or m n==p
        contemp_term=0;
            for (int j=0;j<n;j++){ //the upper limit here is definitely n since n=p
            //considering that the number of column has to be equal to the matrix beyond x.
            contemp_term+=arra[i][j]*arrb[j][i];
            }
            arrb[j][i]=contemp_term;
        }
        showMatrix(arra,arrb);
}
void showMatrix(arra[][],arrb[][]){
 for (int i = 0; i < p; i++)
 printf("\n");
        for (int j = 0; j < q; j++)
        {
            printf("\t%d",arrb[i][j]);
            
        }
}