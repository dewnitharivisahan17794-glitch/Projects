#include <stdio.h>

void checkbalance(float balance);
float deposit();
float withdraw(float balance);

int main()
{
    int choice = 0;
    int balance = 0.0f;
   printf("*** WELCOME TO THE BANK ***");
    do{
        printf("\n Select an Option: \n");
        printf("\n1.Check Balance\n");
        printf("2.Make a Diposit\n");
        printf("3.Make a Withdraw\n");
        printf("4.Exit\n");
        printf("\nChoise is: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            checkbalance(balance);
            break;
        case 2:
            balance += deposit();
            break;
        case 3:
            balance -= withdraw(balance);
            break;
        case 4:
            printf("\nThank you for Banking with us!\n");
            break;
        default:
            printf("\nInvalid choice , please enter 1-4\n");
            break;
        }

    }   while(choice != 4);

}

void checkbalance(float balance)
{
    printf("\n Your current balance is: $%.2f", balance);
}

float deposit()
{
    float amount = 0.0f;
    printf("\nEnter Your deposit Amount: $");
    scanf("%f", &amount);

    if (amount < 0)
    {
        printf("\nInvalid amount!\n");
        return 0.0f;
    }

    else 
    {
        printf("\nYour Deposit is successfully done.\n");
        return amount;
    }
}

float withdraw(float balance)
{
    float amount = 0.0f;

    printf("\nEnter Your withdraw Amount: $");
    scanf("%f", &amount);

    if (amount < 0)
    {
        printf("\nInvalid amount!\n");
        return 0.0f;
    }

    else if (amount > balance)
    {
        printf("\nInsufficient Account Balance!\n");
        return 0.0f;
        printf("Your current Balance is: $%.2f\n", balance);
    }

    else 
    {
        printf("\nYour Withdraw is successfully done.\n");
        return amount;
        printf("Your current Balance is: $%.2f\n", balance);
    }

}