#include<stdio.h>
#include<math.h>
#define PI 3.14159265358979323846

int main(void)
{
    double radius= 0.0;
    double area = 0.0;
    double serf_area = 0.00;

    printf("Enter the radius of the circle: ");
    do{
        scanf("%lf", &radius);
        if(radius <= 0 )
        {
            printf("Invalid input, try again: ");
        }
    }while(radius <= 0 );

    area = PI * pow(radius, 2);
    serf_area = 4 * area;

    printf("The area of the circle is: %lf , and the surface ara of the curface is: %lf\n", area, serf_area);

    return 0;
}