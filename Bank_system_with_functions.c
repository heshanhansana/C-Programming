#include <stdio.h>

// function declaration
void deposit(float);
void widthdraw(int);
void check_balance();

float main_balance = 5000;   // initial balance is 5 000


int main(){

    int user_option;

    // display a welcome message
    printf("Welcome to the ABC Bank! \n\n");

    // display options to be selected
    printf("Select one of the options from the following list and enter the number\n ");
    printf("1. Deposit\t2. Withdraw\t3. Check Balance\n\n");
    printf("Your choice: ");

    scanf("%d", &user_option);


    switch(user_option){
        case 1:
            float deposit_amount;
            printf("Enter the amount to deposit: ");
            scanf("%f", &deposit_amount);
            deposit(deposit_amount);
            break;

        case 2:
            int widthraw_amount;
            printf("Enter the amount to withdraw:");
            scanf("%d", &widthraw_amount);
            widthdraw(widthraw_amount);
            break;

        case 3:
            check_balance();
            break;

        default:
            printf("Invalid input\n");
    }

    return 0;
}



void deposit(float amount){
    main_balance = main_balance + amount;
    printf("New balance : %.2f\n", main_balance);
}


void widthdraw(int amount){
    if (main_balance > amount){
        main_balance -= amount;
        printf("Current balance : %.2f\n", main_balance);
    }

    else{
        printf("Insufficient Balance\n");
    }
}


void check_balance(){
    printf("Your balance is %.2f\n", main_balance);
}
