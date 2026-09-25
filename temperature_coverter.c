#include <stdio.h>

int main(void)
{
    printf("Temperature unit converter.\n");

    int choice = 0;
    float temp = 0.0;
    float f = 0.0;
    float c = 0.0;

    printf("Enter one of the choices:\n");
    printf("1. From Celsius to Fahrenheit.\n");
    printf("2. From Fahrenheit to Celsius.\n");

    do {
        scanf("%d", &choice);

        if (choice < 1 || choice > 2)
        {
            printf("Invalid input, stick to the options above: ");
        }
    } while (choice < 1 || choice > 2);

    printf("Enter the temp: ");
    scanf("%f", &temp);

    if (choice == 1)
    {
        f = (temp * 9.0 / 5.0) + 32.0;
        printf("The equivalent temperature is: %.2f\n", f);
    }
    else
    {
        c = (temp - 32.0) * 5.0 / 9.0;
        printf("The equivalent temperature is: %.2f\n", c);
    }

    return 0;
}