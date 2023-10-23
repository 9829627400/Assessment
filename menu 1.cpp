#include <stdio.h>

int payment;
int dish;



void pizza() {
    int pizza;
    printf("How many pizza you want: ");
    scanf("%d", &pizza);
    printf("Thank you for your order, please wait for 5 minutes.\n");
    payment = 180 * pizza;
    printf("Your total payment is: %d\n", payment);
}

void burger() {
    int burger;
    printf("How many burgers you want: ");
    scanf("%d", &burger);
    printf("Thank you for your order, please wait for 5 minutes.\n");
    payment = 100 * burger;
    printf("Your total payment is: %d\n", payment);
}

void dosa() {
    int dosa;
    printf("How many dosa you want: ");
    scanf("%d", &dosa);
    printf("Thank you for your order, please wait for 5 minutes.\n");
    payment = 120 * dosa;
    printf("Your total payment is: %d\n", payment);
}

void idli() {
    int idli;
    printf("How many idli you want: ");
    scanf("%d", &idli);
    printf("Thank you for your order, please wait for 5 minutes.\n");
    payment = 50 * idli;
    printf("Your total payment is: %d\n", payment);
}

int main() {
    char choice;

    printf("1. Pizza    price: 180rs\n2. Burger   price: 100rs\n3. Dosa     price: 120rs\n4. Idli     price: 50rs\n");
    printf("Select your order: ");
    scanf("%d", &dish);

    switch (dish) {
        case 1:
            printf("You selected pizza\n");
            pizza();
            break;
        case 2:
            printf("You selected burger\n");
            burger();
            break;
        case 3:
            printf("You selected dosa\n");
            dosa();
            break;
        case 4:
            printf("You selected idli\n");
            idli();
            break;

        default:
            printf("Invalid choice\n");
    }

    printf("Do you want to order something else? (y/n): ");
       

    scanf(" %c", &choice); 

    if (choice == 'y') 
	{
        main(); 

    } else if (choice == 'n') {
        printf("Thank you for your order!\n");
    } else {
        printf("Invalid choice. Exiting.\n");
    }

}