/*
 * Program: Reverse a number.
 * Description: Accepts an integer and displays its digits in reverse order.
 */
#include <stdio.h>

int main() {
    int n, digit, reverse = 0;

    printf("Enter your number: ");
    scanf("%d", &n);
    
    printf("After reversing %d, number is: ", n);
    while(n != 0) {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    printf("%d\n", reverse);

    return 0;
}