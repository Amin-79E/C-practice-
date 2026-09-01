#include<stdio.h>
#include<math.h>

int get_LCM(int a ,int b ,int gcd)
{
  int lcm;
  lcm = (a/gcd)*b;
  // (a*b)/gcd; works fine but the used version avoids exceeding integer limits in large integers cases.

  return lcm;
}

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
    printf("Enter the first integer: ");
    scanf("%d",&a);
    if(a<=0)
    {
        printf("Invalid input ,try again: ");
    }
  }while(a<=0);

  do{
    printf("Enter the second integer: ");
    scanf("%d",&b);
    if(b<=0)
    {
        printf("Invalid input ,Try again: ");
    }

  }while(b<=0);


  int gcd = get_GCD(a,b);
  int lcm = get_LCM(a,b,gcd);

  printf("The gcd of %d and %d is: %d",a,b,gcd);
  
  printf("The LCM of %d and %d is: %d",a,b,lcm);

  return 0;
}