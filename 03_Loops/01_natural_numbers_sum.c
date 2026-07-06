/*
 * Program: Calculate the sum of natural numbers.
 * Description: Accepts a positive integer n and calculates the sum of all natural numbers from 1 to n.
 */

#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter the last natural number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("The sum of natural numbers from 1 to %d is %d.\n", n, sum);
    return 0;
}