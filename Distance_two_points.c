#include<stdio.h>
#include<math.h>

int main(void)
{
    double x1, y1;
    double x2, y2;
    double d;

    printf("To calculate the distance between two points.\n");
    printf("Enter the coordinates of the first point(x y): ");
    if(scanf("%lf %lf",&x1, &y1) != 2)
    {
        printf("Invalid input\n");
        return 1;
    }

    printf("Enter the coordinates of the second  point(x y): ");
    if(scanf("%lf %lf",&x2, &y2) != 2)
    {
        printf("Invalid iput\n");
        retrun 1;
    }

    d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1),2));

    printf("The distance between the two points you given is: %.2f\n", d);

    return 0;
}
