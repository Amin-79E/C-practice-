#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void)
{
    char text[215];

    printf("Enter any text to check if it is a hexadecimal number: ");

    fgets(text, sizeof(text) , stdin);
    int len = strlen(text);
    if(len > 0 && text[len-1] == '\n' )
    {
        text[len -1] = '\0';
        len--;
    }

    for(int i=0 ; i<len ; i++)
    {
        if(!isxdigit(text[i]))
        {
            printf("Not a Hexadecimal number.\n");
            return 1;
        }
    }

    printf("It is a Hexadecimal number.\n");

    return 0;
}