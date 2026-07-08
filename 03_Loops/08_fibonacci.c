/*
 * Program: Calculate the sum of the Fibonacci series.
 * Description: Accepts the number of terms and calculates the sum of
 *              the Fibonacci series from the 1st term to the nth term.
 *
 *              Series: 0, 1, 1, 2, 3, 5, 8, ...
 */

#include <stdio.h>

int main() {
    int a = 0, b = 1, next, sum = 0, i, n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%d ", a);

        sum += a;

        next = a + b;
        a = b;
        b = next;
    }

    printf("\nTotal sum of Fibonacci series is: %d\n", sum);

    return 0;
}