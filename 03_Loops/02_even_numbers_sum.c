/*
 * Program: Calculate the sum of even numbers.
 * Description: Accepts the nth term and calculates the sum of even numbers from the 0th term to the nth term.
 */

#include <stdio.h>
int main() {
    int i, n, sum = 0;
    printf("Enter the nth term: ");
    scanf("%d", &n);

    for(i = 0; i<=n; i++) {
        sum += i*2;
    }
    printf("The sum of even numbers from 0th term to %dth term is: %d\n", n, sum);

    return 0;
}