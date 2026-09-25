#include<stdio.h>
#include<math.h>

int main(void)
{
    double principal = 0.0;
    double rate = 0.0; // can be negative in certain cases.
    int years =0;
    int times=0 ;
    double total = 0.0;

    printf("Compound interest calculator.\n");
    printf("Enter the principal amount: ");
    do{
        scanf("%lf", &principal);
        if(principal <0)
        {
            printf("Invalid input, try again: ");
        }
    }while(principal <0 );

    printf("Enter the rate: ");
    scanf("%lf", &rate);
    rate /=100;

    printf("Enter the frequency, how many times per year: ");
    do{
        scanf("%d", &times);
        if(times <=0)
        {
            printf("Invalid input, must be a positive: ");
        }
    }while(times<= 0);

    printf("Enter how many years: ");
    do{
        scanf("%d", &years);
        if(years<=0)
        {
            printf("Invalid input, try again: ");
        }
    }while(years <=0 );

    total = principal * pow((1+ rate/times) , times*years);

    printf("The result is: %.2lf\n", total);

    return 0;
}
