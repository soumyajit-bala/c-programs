/*
 * Program: Check whether a number is even or odd using a function.
 * Description: Accepts an integer from the user and determines
 *              whether it is even or odd using the even_or_odd() function.
 */

#include <stdio.h>
int is_even(int n);

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    is_even(n) ? printf("Even\n") : printf("Odd\n");

    return 0;
}

int is_even(int n) {

    return n % 2 == 0;
}