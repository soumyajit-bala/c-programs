/*
 * Program: Check whether a number is positive, negative, or zero using a function.
 * Description: Accepts an integer from the user and determines whether it is
 *              positive, negative, or zero using the sign() function.
 */

#include <stdio.h>
void signr(int n);

int main() {
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    sign(n);

    return 0;
}

void sign(int n) {
    if(n < 0) {
        printf("Negetive\n");
    }
    else if(n > 0) {
        printf("Positive\n");
    }
    else {
        printf("Zero\n");
    }
}