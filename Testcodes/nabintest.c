#include <stdio.h>
void convert(float[], float[], int n);
float cel2far(float , float );
int main()
{
    int i, n = 3;
    float celc[n], faren[n];
    for (i = 0; i < n; i++)
    {
        printf("Celc[%d]=", i + 1);
        scanf("%f", &celc[i]);
    }
    convert(celc, faren, n);
    for (i = 0; i < n; i++)
        printf("%f", faren[i]);
    return 0;
}
void convert(float cel[], float far[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        far[i]=cel2far(far[i], cel[i]);
}
float cel2far(float f, float c)
{
    f = (float)(9 * c  / 5) + (float) 32.0;
    return(f);
}