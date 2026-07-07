/*
 * Program: Calculate the factorial of a number.
 * Description: Accepts a non-negative integer and calculates its factorial.
 *              Factorial: 1 × 2 × 3 × ... × n
 */

#include <stdio.h>

int main() {

    int i, n, factorial = 1;

    printf("Enter your number: ");
    scanf("%d", &n);

    if(n < 0) {

        printf("Factorial is not defined for negative numbers.\n");
        
        return 0;
    }
    
        for(i = 1; i <= n; i++) {
            factorial *= i;
    }
        printf("The factorial value is: %d\n", factorial);
    
    return 0;
}