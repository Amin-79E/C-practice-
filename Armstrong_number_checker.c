#include<stdio.h>
#include<math.h>
#include<stdbool.h>


int digit_number(int n)
{
    int d=0;

    while(n != 0)
    {
       n = n/10;
       d++;
    }
    return d;
}

void check_armstrong(int n, int d)
{
  // digit^ number of digits , all summed 

  int saved = n;
  int k;
  int result=0;

  while(n != 0)
  {
    k = n%10;
    result += (int)round(pow(k, d));
    n = n/10;
  }

  if (result == saved)
  {
    printf("The number %d is an Armstrong number.",saved);
  }
  else
  {
    printf("The number %d is not an Armstrong number.",saved);
  }
  
}

int main(void)
{
    int n;
    printf("Enter any positive non-zero integer to check if it is an Armstrong number: ");

    do
    {
        scanf("%d",&n);

        if(n<0)
        {
            printf("Invalid input ,try again: ");
        }
        else if(n==0)
        {
            printf("0 is not an Armstrong number.");
            return 0;
        }
    }while(n<=0);

    int digit = digit_number(n);
    check_armstrong(n ,digit);

    return 0;
}