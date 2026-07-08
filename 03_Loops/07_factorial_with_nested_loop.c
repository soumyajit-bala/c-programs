/*
 * Program: Calculate the sum of factorial series.
 * Description: Accepts a positive integer n and calculates
 *              1! + 2! + 3! + ... + n! using nested loops.
 */

#include <stdio.h>

int main() {

    int i, j, n;
    int factorial, sum = 0;

    printf("Enter your number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {

        factorial = 1;           // Reset for every new factorial

        for(j = 1; j <= i; j++) {
            factorial *= j;
        }

        sum += factorial;
    }

    printf("Sum of factorial series = %d\n", sum);

    return 0;
}