#include<stdio.h>
#include<math.h>

int get_GCD(int a ,int b)
{
    int k = (a < b) ? a : b;
    int gcd;

    for(k ; k>=1 ; k--)
    {
        if(a % k == 0 && b % k == 0 )
        {
            gcd = k;
            break;
        }
    }

    return gcd;
}

int main(void)
{
  int a;
  int b;

  do{
    printf("Enter any two non-zero integers to get the GCD between them.\n");
    printf("Enter the first integer the the second( x y ): ");
    if(scanf("%d %d",&a, &b) != 2){return 1;}
    if(a<=0)
    {
        printf("Invalid input for a,try again: ");
    }
    if(b<=0)
    {
        printf("Invalid input for b,try again: ");
    }
  }while(a<=0 || b<=0);

  int gcd = get_GCD(a,b);

  printf("The gcd of %d and %d is: %d",a,b,gcd);

  return 0;
}
