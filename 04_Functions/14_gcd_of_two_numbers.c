/*
 * Program: Calculate the gcd of two numbers.
 * Description: Accepts two integer value and get there gcd value from the gcd() function.
 */

#include <stdio.h>
int gcd(int a, int b);

int main() {

    int a, b; 

    printf("Enter your number: ");
    scanf("%d%d", &a, &b);

    printf("The GCD of the two number is: %d", gcd(a, b));

    return 0;
}

int gcd(int a, int b) {

    int i, n, gcd = 1;

    if(a <= b) {
        n = a;
    }
    else {
        n = b;
    }
    
    for(i = 1; i <= n; i++) {
        if(a % i == 0 && b % i == 0) {

            gcd = i;
        }
    }    

    return gcd;
}