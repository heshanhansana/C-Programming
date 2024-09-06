#include <stdio.h>

int num1, num2, result;


// function decleration
void get_input();
void reset_inputs();
int add(int, int);
int substract(int, int);
int multiply(int, int);
int devide(int, int);
int mod(int, int);


int main(){

    while(1){

        int user_choice;

        printf("MENU\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulus\n\n") ;
        printf("Enter your choice: ");

        scanf("%d", &user_choice);


        switch(user_choice){

            case 1:
                get_input();
                printf("Result: %d\n\n", add(num1, num2));
                break;

            case 2:
                get_input();
                printf("Result: %d\n\n", substract(num1, num2));
                break;

            case 3:
                get_input();
                printf("Result: %d\n\n", multiply(num1, num2));
                break;

            case 4:
                get_input();
                    if(num2 != 0){
                        printf("Result: %d\n\n", devide(num1, num2));
                    }

                    else{
                        printf("Error... Devision by zero\n\n");
                    }
                break;

            case 5:
                get_input();
                printf("Result: %d\n\n", mod(num1, num2));
                break;

            default:
                break;

        }

    }

    return 0;
}



void get_input(){
    num1 = num2 = result = 0;
    printf("Enter your two numbers: ");
    scanf("%d %d", &num1, &num2);
}


int add(int num1, int num2){
    return num1 + num2;
}


int substract(int num1, int num2){
    return num1 - num2;
}


int multiply(int num1, int num2){
    return num1 * num2;
}


int devide(int num1, int num2){
    return num1 / num2;
}


int mod(int num1, int num2){
    return num1 % num2;
}
