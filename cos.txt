#include<stdio.h>
#include<math.h>

#define stop 0.0001

double factorial(int n)
{
    if(n<=1)
    {
        return 1.0;
    }
    return n * factorial(n-1);
}

double power(double x, int n)
{
    if(n==0)
    {
        return 1.0;
    }
    return x * power(x, n-1);
}


double sin_Taylor(double x)
{
    int n=0; 
    double sum=x , prev=x , term , diff ;

    do{
        n++;
        term = (n % 2 == 0 ? 1 : -1) * power(x, 2*n + 1) / factorial(2*n + 1);
        sum += term;
        diff = fabs(fabs(term) - fabs(prev));
        prev = term;
    }while(diff > stop);

    return sum;
}

void display(double x, double s)
{
    printf("The value of sin(%lf) with accuracy 10^-4 is: %.6lf\n", x, s);
}

int main(void)
{
    double x;
    printf("Enter any number you want to get the sin of: ");
    if(scanf("%lf", &x) != 1)
    {
        return 1;
    }

    double s = sin_Taylor(x);

    display(x, s);

    return 0;
}