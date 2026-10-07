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


double cos_Taylor(double x)
{
    int n=0; 
    double sum=1.0 , prev=1.0 , term , diff ;

    do{
        n++;
        term = (n % 2 == 0 ? 1 : -1) * power(x, 2*n) / factorial(2*n);
        sum += term;
        diff = fabs(fabs(term) - fabs(prev));
        prev = term;
    }while(diff > stop);

    return sum;
}

void display(double x, double s)
{
    printf("The value of cos(%lf) with accuracy 10^-4 is: %.6lf\n", x, s);
}

int main(void)
{
    double x;
    printf("Enter any number you want to get the cos of: ");
    if(scanf("%lf", &x) != 1)
    {
        return 1;
    }

    double s = cos_Taylor(x);

    display(x, s);

    return 0;
}
