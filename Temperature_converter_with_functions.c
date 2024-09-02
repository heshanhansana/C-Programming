#include <stdio.h>

// function f=decleration
float celsius_to_fahrenheit(float);
float fahrenheit_to_celsius(float);

int main(){

    int user_choice;
    float temperature_input;

    printf("Select one of the options from the following list and enter the number \n\n");
    printf("\t1. Celsius to Fahrenheit\n\t2. Fahrenheit to Celsius\n\nYour choice: ");
    scanf("%d", &user_choice);


    switch(user_choice){
        case 1:
            printf("\nInput temperature in Celsius: ");
            scanf("%f", &temperature_input);
            printf("Temperature in Fahrenheit : %.2f\n", celsius_to_fahrenheit(temperature_input));
            break;

        case 2:
            printf("\nInput temperature in Fahrenhite: ");
            scanf("%f", &temperature_input);
            printf("Temperature in Celsius : %.2f\n", fahrenheit_to_celsius(temperature_input));
            break;

        default:
            printf("Invalid Input\n");
    }

    return 0;
}


float celsius_to_fahrenheit(float celsius){
    return (celsius * 9/5) + 32;
}


float fahrenheit_to_celsius(float fahrenheit){
    return (fahrenheit - 32) * 5/9;
}
