#include<stdio.h>
#include<math.h>

int main(void)
{
    float x1, y1;
    float x2, y2;
    float d;

    printf("To calculate the distance between two points.\n");
    printf("Enter the coordinates of the first point(x y): ");
    scanf("%f %f",&x1, &y1);

    printf("Enter the coordinates of the second  point( x y): ");
    scanf("%f %f",&x2, &y2);

    d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1),2));

    printf("The distance between the two points you have given is: %.2f\n", d);

    return 0;
}