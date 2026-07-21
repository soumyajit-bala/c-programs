/*
 * Program: Calculate the sum of the Fibonacci series using a function.
 * Description: Accepts the number of terms, displays the Fibonacci series,
 *              and returns the sum of the generated terms.
 */

#include <stdio.h>
int fibonacci_sum(int n);

int main() {

    int n;

    printf("Enter your term number: ");
    scanf("%d", &n);
    if(n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");

    return 0;
    }

    printf("The Fibonacci series is: 0 + ");
    int sum = fibonacci_sum(n);
    printf("The total sum is: %d\n", sum);

return 0;
}

int fibonacci_sum(int n) {

    int a = 0, b = 1, next,  sum = 0;

    for(int i=1; i<=n; i++) {

        sum += a;
        next = a+b;
        a = b;
        b = next;

        printf("%d", a);
        if(i < n) {
            printf(" + ");
        }
    }
    printf("\n");
    

    return sum;
}