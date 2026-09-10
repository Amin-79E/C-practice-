#include<stdio.h>
#include<string.h>

void str_copy(char *str, char * dst)
{
    while(*str != '\0')
    {
        *dst = *str;
        str++;
        dst++;
    }
    *dst = '\0';
}

int main(void)
{
    char str[215];
    printf("Enter any string to create a copy of it(must be no more then a line):\n");
    fgets(str, sizeof(str), stdin);

    char dst[215];

    str_copy(str, dst);

    printf("The original string:\n%s", str);
    printf("The new string copy:\n%s", dst);

    return 0;
}