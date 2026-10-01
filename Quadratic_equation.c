#include<stdio.h>
#include<math.h>

int main(void)
{
   double a;
   double b;
   double c;
   double x1;
   double x2;

   printf("To solve a quadratic equation, form: ax^2 + bx + c\n");
   printf("Enter the value of a: ");
   if(scanf("%lf", &a) != 1)
   {
      printf("Invalid input\n");
      return 1;
   }
   
   if(a == 0)
   {
    printf("Not a quadratic equation.\n");
    return 1;
   }

   printf("Enter the value of b: ");
   if(scanf("%lf", &b) != 1)
   {
      printf("Invalid input\n");
      return 1;
   }

   printf("Enter the value of c: ");
   if(scanf("%lf", &c) != 1)
   {
      printf("Invalid input\n");
      return 1;
   }
   
   double delta = pow(b, 2) - 4*a*c; // the formula for delta;

   if(delta > 0)
   {
    double sqr = sqrt(delta);
    x1 = (-b+sqr) / (a*2);
    x2 = (-b-sqr) / (a*2);

    printf("The roots (solutions of the equation) are: x1 =  %.2f and x2 = %.2f\n",x1 ,x2);
   }
   else if(delta ==0)
   {
    printf("The solution for the equation is: x = %.2f\n", (-b)/(a*2));
   }
   else
   {
    double r = -b / (a*2);
    double i = sqrt(-delta) / (a*2);

    printf("x1 = %.2lf + %.2lfi\n", r, i);
    printf("x2 = %.2lf - %.2lfi\n", r, i);
   }

   return 0;
}
