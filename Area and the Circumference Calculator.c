#include <stdio.h>

int main(){

    const float PI = 3.14159;
    float area, circumference, radius;

    printf("Area and the Circumference Calculator\n");
    printf("------------------------------------\n");

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("\nArea of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);


    return 0;
}
