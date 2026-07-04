/*
 * Program: Compare the area and perimeter of a rectangle.
 * Description: Accepts the length and breadth, calculates the area and perimeter,
 *              and displays which one is greater.
 */

#include <stdio.h>

int main() {
    int l, b;            // l = length, b = breadth of the rectangle
    int area, perimeter; // variables to store area and perimeter

    // Taking input from the user
    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d", &l, &b);

    // Calculating area of the rectangle
    area = l * b;

    // Calculating perimeter of the rectangle
    perimeter = 2 * (l + b);

    // Comparing area and perimeter
    if (area > perimeter)
        printf("Area is greater than Perimeter.\n");
    else if (perimeter > area)
        printf("Perimeter is greater than Area.\n");
    else
        printf("Area and Perimeter are equal.\n");

    return 0;
}