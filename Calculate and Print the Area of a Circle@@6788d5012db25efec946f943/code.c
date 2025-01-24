#include <stdio.h>

int main() {
    float radius, area;
    float pi = 3.14;  // Value of pi as 3.14

    scanf("%f", &radius);

    area = pi * radius * radius;

    // Printing the area
    printf("Area: %.2f\n", area);  // Output area with two decimal places

    return 0;
}