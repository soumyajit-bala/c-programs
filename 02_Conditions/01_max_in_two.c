/* 
 Program to find the maximum of two numbers.
 Input: two integers (a, b)
 Output: the maximum of the two numbers
*/

#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Find and display the maximum
    if (a > b)
        printf("The maximum number is: %d\n", a);
    else if (b > a)
        printf("The maximum number is: %d\n", b);
    else
        printf("Both numbers are equal: %d\n", a);

    return 0;
}