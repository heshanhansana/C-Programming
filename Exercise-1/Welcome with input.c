#include <stdio.h>

int main(){

    char name[50];
    char home_town[50];
    int year;

    printf("Hello, Welcome!\n\n");
    printf("My Personnel Details\n");
    printf("----------------\n");

    printf("Your Name: ");
    scanf("%[^\n]", name);

    printf("\nYour HomeTown: ");
    scanf("%s", home_town);

    printf("\nYour Year: ");
    scanf("%d", &year);

    printf("\nName: %s\n", name);
    printf("Home Town: %s\n", home_town);
    printf("Year: %d\n", year);


    return 0;
}
