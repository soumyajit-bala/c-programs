/*
 * Program: Check whether a number is prime.
 * Description: Accepts an integer and determines whether it is a prime number using a loop.
 */

#include<stdio.h>

int main() {
    int i, n, is_prime = 1;     // 1 means true (prime), 0 means false (not prime)

    printf("Enter your number: ");
    scanf("%d", &n);

    // Handle corner cases: numbers less than or equal to 1 are not prime
    if(n <= 1) {
        is_prime = 0;
    }
    else {
        // Check divisors only up to sqrt(n) for better efficiency.
        for(i = 2; i * i <= n; i++) {
            if(n % i == 0) {
                is_prime = 0;   // Found a factor, so it's NOT prime
                break;          // No need to check further, exit loop
            }
        }
    }

    // Final check based on our flag
    if(is_prime != 0) {
        printf("prime.\n");
    }
    else {
        printf("not prime.\n");
    }

    return 0;
}