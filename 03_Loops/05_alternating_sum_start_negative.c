/*
 * Program: Calculate the sum of an alternating-sign natural number series.
 * Description: Accepts the nth term and calculates the sum of the series
 *             - 1 + 2 - 3 + 4 - 5 + ... up to the nth term.
 */

#include <stdio.h>
#include <math.h>

int sum_using_pow(int n);
int sum_using_if_else(int n);

int main() {
    int n, sum;

    printf("Enter your nth term: ");
    scanf("%d", &n);

    // Change the function call below to sum_using_pow(n) if you want to use the pow() implementation.
    sum = sum_using_if_else(n);   
    
    printf("The total sum of the series from the 1st term to the %dth term is: %d\n", n, sum);

    return 0;
}

int sum_using_pow(int n) {

    int i, sum = 0;

    for(i = 1; i <= n; i++) {
        sum += i * pow(-1, i);
    }

    return sum; 
}

int sum_using_if_else(int n) {

    int i, sum = 0;

    for(i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            sum += i;
        }
        else {
            sum -= i;
        }
    }
    return sum;
}