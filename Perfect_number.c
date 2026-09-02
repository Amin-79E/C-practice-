#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool is_perfect = false; 

bool check_perfect(int n)
{

  int sum=0;
  for(int i=1 ; i<=(int)round(sqrt(n)) ; i++)
  {
    if(n % i == 0)
    {
      sum += i;
      if(n/i != n && i != n/i ) // the i != n/i here works on not double counting the i in case it is a perfect square.
      {
        sum += n/i;
      }
    }
  }

  if(sum == n)
  {
    is_perfect = true;
  }
  
  return is_perfect;
}

int main(void)
{
  int n;
  printf("Enter any positive none-zero integer to check if it is a perfect number: ");
  do
  {
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid input ,must be a non-zero positive integer.\nTry again: ");
    }
  }while(n<=0);

  check_perfect(n);

  if(is_perfect == false)
  {
    printf("The number %d is not a perfect number.",n);
  }
  else
  {
    printf("The number %d is a perfect number.",n);
  }

  return 0;
}