/*
 * Program: Display all prime numbers from 2 to n using a function.
 * Description: Accepts a positive integer and prints all prime numbers up to n.
 */

#include <stdio.h>
void prime_number(int n);

int main() {

    int n;

    printf("Enter your number: ");
    scanf("%d", &n);

    if(n < 2) {
        printf("Invalid input.\n");
        return 0;
    }

    printf("\nAll the prime numbers between 2 and %d are: ", n);

    prime_number(n);

    return 0;
}

void prime_number(int n) {

    int i, j, prime;
    
    for(i = 2; i <= n; i++) {

        prime = 1;

        for(j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                prime = 0;
                break;
            }
        }
        if(prime) {
            printf("%d ", i);
        }
    }
}