#include<stdio.h>

int main(void)
{
    int n;
    
    do{
       
       printf("Enter any number you want to check for being an odd or an even:\t");
       scanf("%d",&n);
       
       if(n<0)
       {
         printf("The input must be a positive integer.\nTry again:\t");
       }

    }while(n<0);

        if(n==0)
        {
            printf("0 is an even number\n");
        }

        else if(n % 2  != 0)
        {
          printf("The number %d ,is odd.\n",n);
        }
        
        else
        {
          printf("The number %d ,is even.\n",n);
        }

        return 0;
}