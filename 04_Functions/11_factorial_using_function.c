/*
 * Program: Calculate the factorial of a number using a function.
 * Description: Accepts a non-negative integer and calculates its factorial.
 *              Factorial: 1 × 2 × 3 × ... × n
 */

#include <stdio.h>
int factorial(int n);

int main() {

    int n;

    printf("Enter your number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    return 0;
    }

    printf("The factorial of %d is: %d\n", n, factorial(n));
    
    return 0;
}

int factorial(int n) {

    int factorial = 1;

    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }

    return factorial;
}