#include <math.h>
#include <stdio.h>
int main() {
    char decision;
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;
    if (discriminant > 0){
         decision='+';
    }
    else if (discriminant == 0){
         decision='*';
    }
    else {
         decision='-';
    }
    switch(decision){
    // condition for real and different roots
    case '+' :
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
        break;

    // condition for real and equal roots
    case '*' :
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
        break;

    // if roots are not real
    default :
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
        break;
    }

    return 0;
} 