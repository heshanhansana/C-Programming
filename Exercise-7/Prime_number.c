#include <stdio.h>

int main() {
    int number, i, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 1) {
        isPrime = 0;
    }

    else {
        for (i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("It is a prime number!\n");
    }

    else {
        printf("It is not a prime number!\n");
    }

    return 0;
}
