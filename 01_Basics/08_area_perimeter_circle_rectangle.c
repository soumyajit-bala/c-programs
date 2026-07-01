/* 
 Program to calculate:
 1. Area and circumference of a circle
 2. Area and perimeter of a rectangle
*/

#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, length, width;
    float area_circle, circumference_circle;
    float area_rectangle, perimeter_rectangle;

    // Input for circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area_circle = PI * radius * radius;          // πr²
    circumference_circle = 2 * PI * radius;      // 2πr

    // Input for rectangle
    printf("Enter the length and width of the rectangle: ");
    scanf("%f %f", &length, &width);

    area_rectangle = length * width;              // l × w
    perimeter_rectangle = 2 * (length + width);   // 2(l + w)

    // Output results
    printf("\nArea of the circle: %.2f\n", area_circle);
    printf("Circumference of the circle: %.2f\n", circumference_circle);
    printf("Area of the rectangle: %.2f\n", area_rectangle);
    printf("Perimeter of the rectangle: %.2f\n", perimeter_rectangle);

    return 0;
}