#include<stdio.h>
#include<math.h>

int main(void)
{
    int n;
    int is_prime = 1; // 0 if no, 1 if yes

    do{
        
        printf("Enter any non_zero positive integer to check if it's a prime number or not:\t");
        scanf("%d",&n);

        if( n <=0 )
        {
            
            printf("Invalid input ,must be a non-zero positive integer.\nTry again:\t");
        }
        // the loop can be n<=1 ,but i wanted to only check for the non-zero positive inputs.
    }while(n<=0);

    if(n==1)
    {
        printf("1 is not a prime number.");
        return 0;
    }

    else
    {
        int k = (int)round(sqrt(n)); 
        for(int i=2 ; i<=k ; i++)
        {
            if(n % i == 0)
            {
                is_prime=0;
                break;
            }
        }

        if(is_prime == 1)
        {
         printf("The number %d ,is a prime number.",n);
        }

        else
        {
         printf("The number %d ,is not a prime number.",n);
        }
    }

    return 0;
}