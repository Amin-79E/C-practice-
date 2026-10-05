#include<stdio.h>
#include<math.h>
#define PI 3.14159
int main(void)
{
    float v;
    printf("Choose:\n1. Enter in radians(enter 1): \n2. Enter in degrees(enter 2): \n");
    
    int choice;
    
    do{
      if(scanf("%d", &choice) != 1){return 1;}
      if(choice < 1 || choice >2)
      {
        printf("Invalid input, stick to the given choices: ");
      }
    }while(choice < 1 || choice >2);

    printf("Enter the value here: ");
    if(scanf("%f", &v) != 1){return 1;}

    if(choice == 1 )
    {
      printf("sin(%.3f) = %.3f\n", v, sin(v));
      printf("cos(%.3f) = %.3f\n", v, cos(v));
      printf("tan(%.3f) = %.3f\n", v, tan(v));
    }
    else{
      float rad;
      rad = v * (PI/180);
      //Radians = Degrees × (π/180).
      printf("I degrees:\n");
      printf("sin(%.3f) = %.3f\n", v, sin(rad));
      printf("cos(%.3f) = %.3f\n", v, cos(rad));
      printf("tan(%.3f) = %.3f\n", v, tan(rad));
    }

    return 0;
}