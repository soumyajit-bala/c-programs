/* 
 Program to check if a point lies on the origin, X-axis, or Y-axis.
 Input: coordinates of the point (x, y)
 Output: message indicating the position of the point
*/

#include <stdio.h>

int main() {
    int x, y;

    // Input coordinates
    printf("Input the coordinates of the point (x, y): ");
    scanf("%d %d", &x, &y);

    // Check location of the point
    if (x == 0 && y == 0) 
        printf("The point is on the origin.\n");  // Both x and y are 0
    else if (x == 0) 
        printf("The point lies on the Y-axis.\n");  // x is 0
    else if (y == 0) 
        printf("The point lies on the X-axis.\n");  // y is 0
    else 
        printf("The point is not on the origin or axes.\n");  // neither 0

    return 0;
}
  