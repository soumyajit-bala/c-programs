/*
 * Program: Count the number of digits in an integer.
 * Description: Accepts an integer and counts how many digits it contains.
 */

#include <stdio.h>
int count_digits(int n);

int main() {

    int n;

    printf("Enter your number: ");
    scanf("%d", &n);
    
    printf("The total count for %d is: %d\n", n, count_digits(n));
    
    return 0;
}

int count_digits(int n) {
    
    int count = 0;
    
    if (n == 0) {
        return 1;
    }
    if (n < 0) {
        n = -n;
    }
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}