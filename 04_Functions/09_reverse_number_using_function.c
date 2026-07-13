/*
 * Program: Reverse a number using function.
 * Description: Accepts an integer and returns its digits in reverse order using a function.
 */

#include <stdio.h>
int reverse(int n);

int main() {

    int n;

    printf("Enter your number: ");
    scanf("%d", &n);

    printf("After reversing %d the number becomes: %d\n", n, reverse(n));

    return 0;
}

int reverse(int n) {

    int digit, reverse = 0;
    
    while(n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }
    
    return reverse;
}