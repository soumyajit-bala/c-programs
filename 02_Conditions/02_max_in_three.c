/* 
 Program to find the maximum of three numbers
*/

#include <stdio.h>

int main() {
    int a, b, c;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check maximum value
    if (a > b && a > c)
        printf("The max value is: %d\n", a);
    else if (b > a && b > c)
        printf("The max value is: %d\n", b);
    else
        printf("The max value is: %d\n", c);

    return 0;
}