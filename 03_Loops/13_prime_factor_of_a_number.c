/*
 * Program: Display the prime factors of a number.
 * Description: Accepts an integer and prints all of its prime factors.
 */

#include <stdio.h>

int main() {
    int n, i, j, is_prime;

    printf("Enter your number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("No prime factors.\n");
        return 0;
    }

    printf("Prime factors are: ");

    // Find all factors
    for (i = 2; i <= n; i++) {

        if (n % i == 0) {

            is_prime = 1;      // Assume this factor is prime

            // Check if the factor itself is prime
            for (j = 2; j * j <= i; j++) {

                if (i % j == 0) {
                    is_prime = 0;
                    break;
                }
            }

            if (is_prime) {
                printf("%d ", i);
            }
        }
    }

    printf("\n");

    return 0;
}