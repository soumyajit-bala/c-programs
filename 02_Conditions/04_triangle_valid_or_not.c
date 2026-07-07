/* 
 Program to check whether a triangle is valid based on its angles
*/

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the three angles separated by spaces: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b + c == 180 && a > 0 && b > 0 && c > 0) {
        printf("The triangle is valid.\n");
    }
    else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}