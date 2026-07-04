/* 
 Program to check whether three points lie on a straight line
*/

#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;

    // Input coordinates of three points
    printf("Enter the coordinates x1 y1 x2 y2 x3 y3: ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    // Check collinearity using slope comparison
    if ((y3 - y2) * (x2 - x1) == (y2 - y1) * (x3 - x2))
        printf("All points lie on a straight line.\n");
    else
        printf("The points do not lie on a straight line.\n");

    return 0;
}