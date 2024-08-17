#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,root1,root2,ab;

    printf("Enter coefficient a:");
    scanf("%f",&a);

    printf("Enter coefficient b:");
    scanf("%f",&b);

    printf("Enter coefficient c:");
    scanf("%f",&c);

    ab=(b*b)-(4*a*c);
    root1=((-b+sqrt(ab))/2*a);
    root2=((-b-sqrt(ab))/2*a);

    printf("Root 1:%.2f\n",root1);
    printf("Root 2:%.2f\n",root2);


    return 0;
}
