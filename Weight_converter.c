#include<stdio.h>


int main(void)
{
    printf("Weight converter program.");

    int choice =0;
    float weight = 0.0;
    float lb = 0.0;
    float kg = 0.0;

    printf("Enter your choice:  \n");
    printf("1. Kilograms to Pounds.\n2. Pounds to Kilograms.\n");

    do{
        scanf("%d",&choice );
        if(choice <1 || choice >2)
        {
            printf("Invalid input, stick to the options above: ");
        }
    }while(choice <1 || choice >2);

    printf("Enter the weight: ");
    do{
        scanf("%f",&weight);
        if(weight < 0){
            printf("Invalid input, try again:");
        }
    }while(weight <0) ;

    if(weight == 0)
    {
        printf("The equivalent weight is: 0\n");
        return 0;
    }

    if(choice == 1)
    {
      lb = weight*2.20462;
     printf("The equivalence of the weight in lb is: %.2f\n", lb);

    }
    else
    {
      kg = weight/2.20462;
      printf("The equivalence of the weight in kg is: %.2f\n", kg);

    } 

    return 0;
}