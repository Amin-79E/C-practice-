#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c;

    printf("To solve a quadratic equation, form: ax^2 + bx + c\n");

    printf("Enter the value of a: ");
    if (scanf("%lf", &a) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    if (a == 0)
    {
        printf("Not a quadratic equation.\n");
        return 1;
    }

    printf("Enter the value of b: ");
    if (scanf("%lf", &b) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    printf("Enter the value of c: ");
    if (scanf("%lf", &c) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    double delta = b * b - 4 * a * c;

    if (delta > 0)
    {
        double sqr = sqrt(delta);
        double x1 = (-b + sqr) / (2 * a) + 0.0;
        double x2 = (-b - sqr) / (2 * a) + 0.0;

        printf("The roots are: x1 = %.2f and x2 = %.2f\n", x1, x2);
    }
    else if (delta == 0.0)
    {
        double x = -b / (2 * a) + 0.0;

        printf("The solution is: x = %.2f\n", x);
    }
    else
    {
        double r = -b / (2 * a) + 0.0;
        double i = sqrt(-delta) / (2 * fabs(a));

        printf("x1 = %.2f + %.2fi\n", r, i);
        printf("x2 = %.2f - %.2fi\n", r, i);
    }

    return 0;
}
