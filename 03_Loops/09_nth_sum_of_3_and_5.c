/*
 * Program: Calculate the sum of the series 3 + 5 + 3 + 5 + ...
 * Description: Accepts the number of terms and calculates the sum
 *              of the alternating series up to the nth term.
 */

#include <stdio.h>

int main() {
    int i = 1, n, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    while (i <= n) {
        if (i % 2 == 0) {
            sum += 5;  // even positions → add 3
        
        }
         else {
            sum += 3;  // odd positions → add 5
        i++;
        }
    }   
    printf("Sum of the series is: %d\n", sum);

    return 0;
}