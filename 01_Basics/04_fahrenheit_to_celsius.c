/* 
 Program to convert temperature from Fahrenheit to Celsius
*/

#include <stdio.h>

int main() {
    float F, C;

    // Input temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &F);

    // Convert Fahrenheit to Celsius
    C = (5 * (F - 32)) / 9;

    // Output result
    printf("Temperature in Celsius: %.3f\n", C);

    return 0;
}