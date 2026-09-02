#include<stdio.h>

int digits_sum(int n)
{
  int sum=0;
  int k;

  while(n != 0)
  {
    k = n%10;
    sum += k;
    n = n/10; 
  }

  return sum;
}

void check_hashad(int n, int sum)
{
  if(n % sum == 0)
  {
    printf("The number %d is a hashad number.", n);
  }
  else
  {
    printf("The number %d is not a hashad number", n);
  }
}

int main(void)
{
    int n;
    printf("Enter any positive non-zero integer to check if it is a Hashad number: ");

    do
    {
        scanf("%d",&n);
        
        if(n<=0)
        {
            printf("Invalid input ,try again: ");
        }
    }while(n<=0);

    int sum = digits_sum(n);

    check_hashad(n ,sum);

    return 0;
}