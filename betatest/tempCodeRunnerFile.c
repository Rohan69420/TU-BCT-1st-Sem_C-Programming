#include <stdio.h>

int main(){
    int n1,n2,prime=0,pal=0,num=0, i,j,temp,a;

    printf("enter n1 and n2 ");
    scanf("%d%d",&n1,&n2);

    for(i=n1+1; i<n2; i++)
    {
      
        for (j=2;j<=i;j++) //allowed the loop j to run upto i.
        {
            
           
            if (j==i) //pushed the loop to behind so it makes sense now yay.
            {
                printf("\n%d is a prime number between %d and %d",i,n1,n2);
                prime++;
            }
            if (i%j==0)
            {
                break;
            }
        }
              temp=i;
            while(temp!=0)
            {
                    a=temp%10;
                    num=num*10+a;
                    temp/=10;

            if (num==i)
            {
                printf("\n%d is a palindrome between %d and %d ", num,n1,n2);
                pal++;
            } 
            }
    }
    printf("total prime numbers=%d",prime);
    printf("total palindrome numbers=%d",pal);
    
return 0;
}