/*
 * Program: Display all prime numbers from 2 to n.
 * Description: Accepts a positive integer and prints all prime numbers up to n.
 */

#include<stdio.h>

int main() {
    int i, j, n, is_prime;

    printf("Enter your number: ");
    scanf("%d", &n);

    if(n <= 1){
        printf("There are no prime numbers up to %d.\n", n);

        return 0;
    }

    printf("Prime numbers are: ");

    // Find all numbers between 2 and n

    for(i = 2; i <= n; i++) {
        
            is_prime = 1;       // Assume the current number is prime            

            //check if the number is prime or not
            for (j = 2; j * j <= i; j++) {

                if (i % j == 0) {
                    is_prime = 0;
                    break;
                }
            

            }
                if(is_prime) {
                printf("%d ", i);
                }
    }
    printf("\n");

    return 0;

}