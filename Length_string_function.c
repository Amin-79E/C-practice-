#include<stdio.h>

int str_len(char *string)
{
    int length = 0;
    while(*string != '\0')
    {
        length++;
        string++;
    }

    return length;
}

int main(void)
{
    char string[215];

    printf("Enter any string you want to get the length of(must be in one line at max): \n");
    fgets(string, sizeof(string), stdin);

   int len = str_len(string);
   if(len >0 && string[len - 1] == '\n')
   {
    string[len - 1] = '\0';
   }
   int length = str_len(string);
   printf("The length of the string you entered is: %d.", length);

   return 0;
}