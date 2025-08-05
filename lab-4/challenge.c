// ====== ATM MENU ======
// 1. Check Balance
// 2. Deposit Money
// 3. Withdraw Money
// 4. Exit
// Choose an option: 2
// Enter amount to deposit: 1000
//
// ====== ATM MENU ======
// 1. Check Balance
// 2. Deposit Money
// 3. Withdraw Money
// 4. Exit
// Choose an option: 3
// Enter amount to withdraw: 500
// Withdrawal successful.
//
// ====== ATM MENU ======
// 1. Check Balance
// 2. Deposit Money
// 3. Withdraw Money
// 4. Exit
// Choose an option: 1
// Current Balance: 500.00
//
// ====== ATM MENU ======
// 1. Check Balance
// 2. Deposit Money
// 3. Withdraw Money
// 4. Exit
// Choose an option: 4
// Thank you for using the ATM.

#include <stdio.h>

int main() {
    float balance = 0.0f;

    while (1) {
        printf("====== ATM MENU ======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        int option = 0;
        printf("Choose an option: ");
        scanf("%d", &option);

        switch (option) {
        case 1:
            printf("Current Balance: %.2f\n", balance);
            break;
        case 2:
            float deposit;

            printf("Enter amount to deposit: ");
            scanf("%f", &deposit);

            balance += deposit;
            break;
        case 3:
            float withdraw;
            printf("Enter amount to withdraw: ");
            scanf("%f", &withdraw);

            balance -= withdraw;

            printf("Withdrawal successful.\n");
            break;
        case 4:  // Just exit
        default:
            printf("Thank you for using the ATM.\n");
            return 0;
        }
        printf("\n");
    }

    return 0;
}
