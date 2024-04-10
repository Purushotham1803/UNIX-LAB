
#include <stdio.h>
#include "Head.h"
int main() {
    float radius;
    int number;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    float area = calculateArea(radius);
    printf("Area of the circle: %.2f\n", area);
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isEven(number)) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}

