#include<stdio.h>

int factorial(int x)
{
  int result=1;
  for(int i=x ; i>1 ; i--)
  {
    result *= i;
  }
  return result;
}

void check_strong(int n)
{
    int sum_factorials = 0;
    int k;
    int saved = n;

    while(n != 0)
    {
      k = n%10;
      sum_factorials += factorial(k);
      n = n/10;
    }

    if(sum_factorials == saved)
    {
        printf("Then number %d is a strong number.", saved);
    }
    else
    {
        printf("The number %d is not a strong number.", saved);
    }
}

int main(void)
{
    int n;
    printf("Enter any positive non-zero integer to check if it is a strong number: ");

    do
    {
        scanf("%d",&n);

        if(n<=0)
        {
            printf("Invalid input ,try again: ");
        }
    }while(n<=0);

    check_strong(n);

    return 0;

}