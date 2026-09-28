#include<stdio.h>
#include<ctype.h>

int main(void)
{
    char  text[300] = {};
    int letter_count =0;
    int digit_count =0;
    int space_count =0;
    int punct_count =0;


    printf("Enter Any text to get the count of: digits, letters, spaces, and punctuations in it \n");
    fgets(text ,sizeof(text) ,stdin);

    int i=0;
    while(text[i] != '\0')
    {

     if(isalpha(text[i]))
       letter_count++;

     if(isdigit(text[i]))
       digit_count++;

     if(isspace(text[i]))
       space_count++;

     if(ispunct(text[i]))
       punct_count++;

    i++;

    }

    printf("In the text you entered ,there are exactly:\n");
    printf("%d letters ,%d digits ,%d spaces and %d punctuations\n",letter_count ,digit_count ,space_count ,punct_count);

    return 0;
}