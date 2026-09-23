#include<stdio.h>
#include<string.h>

int main(void)
{
    char item[50] = "";
    double price = 0.0;
    int quantity = 0;
    char currency = '$';
    double total =0.0;
    
    printf("Enter the name of the iterm you wish to buy: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item)-1] = '\0';

    printf("Enter the price of the product: ");
    do{
        scanf("%lf", &price);
        if(price <=0 )
        {
            printf("Invalid input, try again: ");
        }
    }while(price <= 0); 

    printf("Enter how many you wish to purchase of this product: ");
    do{
        scanf("%d", &quantity);
        if(quantity <= 0)
        {
            printf("Invalid input, try again: ");
        }
    }while(quantity <= 0);

    total = price * quantity; 

    printf("The total for your purchase is: %c%.2lf\n", currency, total);
    return 0;
}