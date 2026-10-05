# include<stdio.h>


void reverse(char *start, char *end) {
    if (start >= end) {
        return;
    }

    char temp = *start;
    *start = *end;
    *end = temp;

    reverse(start + 1, end - 1);
}

int main(void)
{
   
    char word[] = {"Algorithm"};

    printf("%s\n", word);

    char *end = word;
    while(*end != '\0')
    {
       end++;
    }
    end--;

    reverse(word, end);

    printf("Reversed: %s ", word);

    return 0;
}