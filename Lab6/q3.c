#include <stdio.h>
#include <conio.h>
int main()
{
    int n1, n2, p_count = 0, pal_count = 0, temp, sum, rem;
    printf("Enter two number n1 and n2 such that n1<n2\t");
    scanf("%d%d", &n1, &n2);
    for (int i = (n1 + 1); i <= n2; i++)
    { //to run numbers
        //check for palindrome or prime.
        if (i != 1)
        { //prime checker
            int check = 1; //check reset
            for (int j = 2; j < i; j++) //warning: 1 and itself should be excluded in the loop
            {
                if (i % j == 0)
                {
                    check = 0;
                }
            }
            //printf("check=%d",check); //tester
            if (check == 1)
            {
                printf("\nOne of the prime is %d", i); //prime display
                p_count++;                             //prime counter
            }
        }
        if (i > 10)
        {
            temp = i; //temp reset with concurrent value
            sum = 0;  //sum reset
            do
            {
                rem = temp % 10;
                sum = sum * 10 + rem;
                temp /= 10;

            } while (temp > 0);
            if (sum == i) //palindrome tester
            {
                printf("\n%d is a palindrome.", i); //display palindrome
                pal_count++;                        //palindrome counter
            }
           
        }
    }
     printf("\nNumber of primes= %d\nNumber of palindrome= %d",p_count,pal_count);
    getch();
    return 0;
}