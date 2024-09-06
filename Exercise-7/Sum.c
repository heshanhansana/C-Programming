#include <stdio.h>

int main(){

    int number, sum;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if(number < 1){
        printf("Your input is not a positive number\n");
        return 1;
    }

    for(int i=1; i <= number; i++){
        sum += i;
    }

    printf("The Sum of the range 0 - %d is: %d\n", number, sum);

    return 0;
}
