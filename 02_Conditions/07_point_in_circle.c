//This code determine whether a point lies inside the circle or not.
#include<stdio.h>
#include<math.h>

int main() {
    float xc, yc, r, x, y, distance;
    printf("Input the center of the circle (xc, yc):");
    scanf("%f %f", &xc, &yc);

    printf("Input the radius of the circle (r):");
    scanf("%f", &r);
    
    printf("Input the point coordinates (x, y):");
    scanf("%f %f", &x, &y);

    //Calculate the distance from the point to the center of the circle.
    distance = sqrt((pow(x -xc, 2)) + (pow(y - yc, 2)));

    if (distance < r) 
        printf("The point is inside the circle.");
    else if (distance == r)
        printf("The point is on the circle.");
    else 
        printf("The point is outside the circle.");
    
    return 0;
    
}