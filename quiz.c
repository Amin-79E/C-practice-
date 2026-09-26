#include<stdio.h>
#include<ctype.h>

int main(void)
{

    char questions[][100] = {"What is the largest planet in our solar system: ",
                              "What is the hottest planet in our solar system: ",
                              "What planet has the most amount of moons: "};

    char options[][100] = {"A. Jupiter.\nB. Saturn.\nC. Mars.",
                           "A. Earth.\nB. Mars.\nC. Venus.",
                           "A. Mars.\nB. Jupiter.\nC. Saturn."};

    char answer[] = {'A', 'C', 'C'};

    int questionsCount = sizeof(questions) / sizeof(questions[0]);
    char guess = '\0';
    int score = 0;

    for(int i=0; i< questionsCount ; i++)
    {
        printf("%s\n", questions[i]);
        printf("\n%s\n", options[i]);
        printf("Enter your choice : ");
        scanf(" %c", &guess);

     guess = toupper(guess);

     if(guess != answer[i])
     {
         printf("Wrong answer.\n");
        printf("The right one is: %c\n", answer[i]);
     }
     else
     {
        printf("Correct!\n");
        score ++;
     }
    }

    printf("your final score is: %d / %d\n", score, questionsCount);

    return 0;
}