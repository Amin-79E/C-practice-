#include<stdio.h>

char *strchr(char *str, char c)
{
    while (1)
    {
        if (*str == c)
        {
            return str;
        }
        if (*str == '\0')
        {
            break;
        }
        str++;
    }
    return NULL;
}

int main(void)
{
    char str[215];
    printf("Enter ay string you want(must be in one line at max): \n");
    fgets(str, sizeof(str) ,stdin);

    char c;
    printf("Enter any char you want to a get a pointer to it's first appearance: ");
    scanf("%c",&c);

    char *result = strchr(str, c);

    if (result != NULL)
    {
        printf("Found '%c' at position: %ld\n", c, result - str);
    }
    else
    {
        printf("Character not found.\n");
    }

    return 0;
}