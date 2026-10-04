#include<stdio.h>

int countZeros(int n)
{
  if(n == 0){
    return 0;
  }
  if( n % 10 == 0)
  {
    return 1 + countZeros( n/10 );
  }

  return countZeros( n/10 );
}

int main(void)
{
    int n;

    printf("Enter Any positive non-zero integer to count the number of zeros in it: ");

    do{
        if(scanf("%d", &n) != 1){return 1;}

        if(n <=0 )
        {
            printf("Must be a positive non-zero integer.\nTry again: ");
        }
    }while( n<=0 );

    int c =countZeros(n);

    printf("The number of zeros in %d is: %d\n",n,c);

    return 0;
}