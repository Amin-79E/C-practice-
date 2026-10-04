#include <stdio.h>

int prime_factor(int n, int factors[])
{
    int j = 0;
    for (int i = 2; i <= n; )
    {
        if (n % i == 0)
        {
            factors[j++] = i;
            n /= i;
        }
        else
            i++;
    }
    return j;
}

int main(void)
{
    int n;
    printf("Enter any positive non-zero integer to get its prime factorization: ");

    do
    {
        if (scanf("%d", &n) != 1)
            return 1;

        if (n <= 0)
            printf("Invalid input, try again: ");
    } while (n <= 0);

    int factors[100];
    int count = prime_factor(n, factors);

    printf("The prime factors of %d: ", n);
    if (count == 0)
        printf("none (1 has no prime factors)");
    for (int i = 0; i < count; i++)
    {
        printf("%d", factors[i]);
        if (i != count - 1)
            printf(" x ");
    }
    printf("\n");

    return 0;
}
