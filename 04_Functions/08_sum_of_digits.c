/*
 *Program: Calculate the sum of the digits of an integer.
 *Description: Accepts an integer and calculates the sum of its digits.
 */

#include <stdio.h>
int digit_sum(int n);

int main() {

    int n; 

    printf("Enter your number: ");
    scanf("%d", &n);

    printf("Sum of digits = %d\n", digit_sum(n));

    return 0;
}

int digit_sum(int n) {

    if (n < 0) {
        n = -n;
    }
    int sum = 0;

    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}