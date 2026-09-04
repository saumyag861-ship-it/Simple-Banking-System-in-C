#include <stdio.h>

int main()
{
    int choice;
    float balance = 0, amount;

    printf("===== SIMPLE BANKING SYSTEM =====\n");

    do
    {
        printf("\n1. Deposit Money");
        printf("\n2. Withdraw Money");
        printf("\n3. Check Balance");
        printf("\n4. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                if(amount > 0)
                {
                    balance = balance + amount;
                    printf("Amount deposited successfully!\n");
                }
                else
                {
                    printf("Invalid amount!\n");
                }
                break;

            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount > 0 && amount <= balance)
                {
                    balance = balance - amount;
                    printf("Amount withdrawn successfully!\n");
                }
                else
                {
                    printf("Insufficient balance or invalid amount!\n");
                }
                break;

            case 3:
                printf("Your current balance is: %.2f\n", balance);
                break;

            case 4:
                printf("Thank you for using Simple Banking System!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while(choice != 4);

    return 0;
}
