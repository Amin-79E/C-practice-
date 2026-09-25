#include<stdio.h>
#include<math.h>

int main(void){
    
        double n1;
        double n2;
        char op;
        double result=0;

        printf("This program will work as a calculator for two inputs of your choice.\n");
        printf("Enter the operation you want to do(+ , - , * , / , ^): ");
        do{
            scanf(" %c", &op);
            if(op !='+' && op !='-' && op !='/' && op !='*' && op != '^')
            {
                printf("Invalid choice, stick to the provided ones: ");
            }
        }while(op !='+' && op !='-' && op !='/' && op !='*' && op != '^');

        printf("Enter the first number: ");
        scanf("%lf",&n1);

        printf("Enter the second number: ");
        scanf("%lf",&n2);

        switch(op){

            case '+': result = n1 + n2;
            break;

            case '-': result = n1 - n2;
            break;

            case '*': result = n1 * n2;
            break;

            case '/': {if(n2 == 0 ){printf("Can not divide by 0.");  return 1; } result = n1 / n2; } //using the outer {} to include all the code inside the case.
            break;

            case '^': result = pow(n1, n2);
            break;

            default: { printf("Not an operation."); return 1; }
        }

        printf("The result of the operation is: %.4f\n", result);
        
        return 0;
    }