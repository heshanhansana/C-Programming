#include <stdio.h>

int main()
{
    int num1, num2, sum, diff, product;

    printf("Enter the First Number: ");
    scanf("%d", &num1);

    printf("Enter the Second Number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    diff = num1 + num2;
    product = num1 * num2;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", product);

    return 0;
}
