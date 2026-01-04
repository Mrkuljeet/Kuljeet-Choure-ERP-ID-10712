#include <stdio.h>

int main() {
    int pin = 1234, enteredPin;
    int choice;
    float balance = 10000, amount;

    printf("Welcome to ATM Machine\n");
    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if (enteredPin != pin) {
        printf("Incorrect PIN. Access Denied.\n");
        return 0;
    }

    printf("\nLogin Successful!\n");

    printf("\n1. Withdraw Money");
    printf("\n2. Deposit Money");
    printf("\n3. Check Balance");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount > 0 && amount <= balance) {
                balance = balance - amount;
                printf("Please collect your cash.\n");
                printf("Updated Balance: %.2f\n", balance);
            } else {
                printf("Invalid or insufficient balance.\n");
            }
            break;

        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);

            if (amount > 0) {
                balance = balance + amount;
                printf("Amount deposited successfully.\n");
                printf("Updated Balance: %.2f\n", balance);
            } else {
                printf("Invalid deposit amount.\n");
            }
            break;

        case 3:
            printf("Your current balance is: %.2f\n", balance);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
