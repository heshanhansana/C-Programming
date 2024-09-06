#include <stdio.h>

int main(){

    int number;
    int factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if( number < 0 ){
        printf("Factorial of a negative number doesn't exist.\n");
        return 1;
    }


    else if( number >= 1 ){
        for(int i = 1; i <= number; i++){
            factorial *= i;
        }
    }


    printf("The factorial of 10 is: %d\n", factorial);

    return 0;
}
