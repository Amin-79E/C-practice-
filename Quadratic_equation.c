#include<stdio.h>
#include<math.h>

int main(void)
{
   float a;
   float b;
   float c;
   float s1;
   float s2;

   printf("To solve a quadratic equation, form: ax^2 + bx + c\n");
   printf("Enter the value of a: ");
   scanf("%f", &a);
   if(a == 0)
   {
    printf("Not a quadratic equation.\n");
    return 1;
   }

   printf("Enter the value of b: ");
   scanf("%f", &b);

   printf("Enter the value of c: ");
   scanf("%f", &c);

   float delta = pow(b, 2) - 4*a*c; // the formula for delta;

   if(delta > 0)
   {
    float sqr = sqrt(delta);
    s1 = (-b+sqr) / (a*2);
    s2 = (-b-sqr) / (a*2);

    printf("The roots (solutions of the equation) are: %f and %f\n",s1 ,s2);
   }
   else if(delta ==0)
   {
    printf("The solution for the equation is: %f\n", (-b)/(a*2));
   }
   else
   {
    float r = -b / (2*a);
    float i = sqrt(-delta) / (a*2);
    printf("The solutions for the equation: %f and %f \n",r, i );
   }

   return 0;
}