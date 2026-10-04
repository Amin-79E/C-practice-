#include<stdio.h>

int digits_sum(int n)
{
    if(n == 0){
       return 0;
    }

    return ( n%10 ) + digits_sum( n/10 );
}

int main(void)
{
  int n;

  printf("Enter any strictly positive integer to get the sum of it's digits: ");
  do{
    if(scanf("%d", &n) != 1){return 1;}

    if(n <=0 )
    {
      printf("Abide your input by the given requirements (must be a strictly positive number).\nTry again: ");
    } 
  }while(n<=0);

   int result = digits_sum(n);

   printf("The sum of all digits of the number %d is: %d\n", n, result);

   return 0;
}