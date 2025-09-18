    #include <stdio.h>

    int main(void){
        int balance = 0, choice, deposit, withdrawal;

        while (1) {
            printf("====== ATM MENU ======\n");
            printf("1. Check Balance\n");
            printf("2. Deposit Money\n");
            printf("3. Withdraw Money\n");
            printf("4. Exit\n");
            printf("Choose an option: ");
            scanf("%d", &choice);

            if(choice == 4){
                printf("Thank you for using the ATM.\n");
                break;
            } else if(choice == 1){
                printf("Current Balance: %d\n", balance);
            } else if(choice == 2){
                printf("Enter amount to deposit: ");
                scanf("%d", &deposit);
                if(deposit > 0){
                    balance = balance + deposit;
                    printf("Deposit successful.\n");
                } else {
                    printf("Invalid deposit amount. Please enter a positive value.\n");
                }
            } else if(choice == 3){
                printf("Enter amount to withdraw: ");
                scanf("%d", &withdrawal);
                if(balance >= withdrawal){
                    balance = balance - withdrawal;
                    printf("Withdrawal successful.\n");
                } else {
                    printf("Insufficient funds. Please try again.\n");
                }
            } else {
                printf("Invalid option. Please try again.\n");
            }
            printf("\n");
        }
        return 0;
    }