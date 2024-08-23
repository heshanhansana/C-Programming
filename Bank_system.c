#include <stdio.h>


void deposit(int balance){
    int deposit_amount;

    printf("Enter the amount to deposit: ");
    scanf("%d", &deposit_amount);

    balance += deposit_amount;
    printf("Current balance: %d\n", balance);
}


void widthdraw(balance){
    int widthdraw_amount;

    printf("Enter the amount to withdraw: ");
    scanf("%d", &widthdraw_amount);

    if(balance > widthdraw_amount){
        balance -= widthdraw_amount;
        printf("Current balance: %d\n", balance);
    }

    else{
        printf("Your balance is Insufficient to withdraw that amount of money\n");
    }
}



int main(){

    int balance = 10000;    //initial balance
    int choice;

    printf("Welcome to the ABC Bank!\n\n");

    // Select options - Main menu
    printf("Select one of the options from the following list and enter the number\n");
    printf("1.Deposit\t2.Withdraw\t3.Check Balance\n\n");

    printf("Your choice: ");
    scanf("%d", &choice);

    //Select the service
    switch (choice){
    case 1:
        deposit(balance);
        break;

    case 2:
        widthdraw(balance);
        break;

    case 3:
        printf("Your balance is %d\n", balance);
        break;

    default:
        printf("Invalied Input...\n");

    }

    return 0;
}