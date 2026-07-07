/*
 * Program: Calculate the sum of odd numbers.
 * Description: Accepts the nth term and calculates the sum of odd numbers from the 1st term to the nth term.
 */

#include <stdio.h>

int main() {
    int i, n, sum = 0;
    printf("Enter the nth term: ");
    scanf("%d", &n);

    for(i = 1; i <= n ; i++) {
        sum = sum + 2*i-1;
    }
    printf("The sum of odd numbers from the 1st term to the %dth term is: %d\n", n, sum);

    return 0;
}