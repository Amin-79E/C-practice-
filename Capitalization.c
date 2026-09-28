#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

int main(void)
{
    char  text[300] = {};
    bool capitalize = true;

    printf("Enter Any text to fix the capitalization of \n");
    if(fgets(text ,sizeof(text) ,stdin) == NULL )
    {
        return 1;
    }
    
    int i= 0;
    while(text[i] != '\0')
    {
      if(isalpha(text[i])){
        if(capitalize)
        {
          text[i] = toupper(text[i]);
          capitalize = false;
        }
        else
        {
          text[i] = tolower(text[i]);
        }
      }

      if(text[i] == '.' || text[i] == '!' || text[i] == '?' )
      {
        capitalize = true;
      }

      i++;
    }

    printf("Result: %s", text);

    return 0;
}
