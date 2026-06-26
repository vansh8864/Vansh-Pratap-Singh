#include <stdio.h>
int main() {
    int choice, pin = 1234, enteredPin;
    float balance = 5000.0, amount;
    // Ask user to enter ATM PIN
    printf("Enter your ATM PIN: ");
    scanf("%d", &enteredPin);
    // Check if PIN is correct
    if (enteredPin != pin) {
        printf("Invalid PIN! Access denied.\n");
        return 0;
    }
    // ATM menu loop
    do {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                // Display current balance
                printf("Your current balance is: %.2f\n", balance);
                break;
            case 2:
                // Deposit money
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Amount deposited successfully.\n");
                printf("Updated balance: %.2f\n", balance);
                break;
            case 3:
                // Withdraw money
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > balance) {
                    printf("Insufficient balance!\n");
                } else {
                    balance -= amount;
                    printf("Please collect your cash.\n");
                    printf("Updated balance: %.2f\n", balance);
                }
                break;
            case 4:
                // Exit from ATM
                printf("Thank you for using the ATM.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);
    return 0;
}