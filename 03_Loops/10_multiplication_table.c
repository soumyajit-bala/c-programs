/*
 * Program: Display the multiplication table of a number.
 * Description: Accepts an integer and displays its multiplication
 *              table from 1 to 10.
 */

#include <stdio.h>

int main() {

    int i, n;

    printf("Enter your number: ");
    scanf("%d", &n);

    printf("The table for %d is: \n", n);
    for(i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}