/*
 * Program: Check if the input palindrome number or not.
 * Description: Accepts an integer, reverses its digits using a function,
 *              and compares the reversed number with the original number
 *              to determine whether it is a palindrome.
 */

#include <stdio.h>
int reverse(int n);

int main() {

    int n;

    printf("Enter your number: ");
    scanf("%d", &n);

    if(n == reverse(n)) {
        printf("This number is Palindrome.\n");
    }
    else {
        printf("This number isn't Palindrome.\n");
    }

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