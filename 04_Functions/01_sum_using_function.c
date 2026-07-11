/*
 * Program: Calculate the sum of two numbers using a function.
 * Description: Accepts two integers from the user and calculates
 *              their sum using a user-defined function.
 */

#include <stdio.h>
int sum(int a, int b);

int main() {
    int a, b;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("The sum of %d and %d is: %d", a, b, sum(a, b));
    
    return 0;
}

int sum(int a, int b) {

    return a + b;
}