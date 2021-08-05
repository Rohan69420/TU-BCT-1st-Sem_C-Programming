#include <stdio.h>
#include <conio.h>
void hilo(float [],float *,float *);
int main()
{
    float arr[10];
    float sum,diff;
    for (int i=0;i<10;i++){
        printf("\nEnter the %dth term of the array.",i+1); //reading array
        scanf("%f",&arr[i]);
    }
    hilo(&arr[0],&sum,&diff);
    printf("\nThe sum of the highest and the lowest term is %.2f\nThe difference of the highest and lowest term is %.2f",sum,diff);
    getch();
    return 0;
}
void hilo(float *array,float *sum, float *diff){
    float highest=*array,lowest=*array;
    int h_pos,l_pos;
    for (int i=1;i<10;i++){ //skipping the first element which is itself.
        if (highest<*(array+i)){
        highest=*(array+i);
        h_pos=i;
        }
        if (lowest>*(array+i)){
            lowest=*(array+i);
            l_pos=i;
        }
        
    }
    *sum=highest+lowest;
        *diff=highest-lowest;
        printf("\nThe highest number is %.2f\nThe lowest number is %.2f",highest,lowest);
        printf("\nThe highest term is the %dth term and the lowest number is %dth term in the array",h_pos+1,l_pos+1);
}