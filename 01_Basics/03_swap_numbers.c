/* 
 Program to swap two numbers using a third variable
*/

#include <stdio.h>

int main() {
    int a, b, temp;   // Declare variables

    // Ask user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Store value of 'a' in temporary variable
    temp = a;

    // Assign value of 'b' to 'a'
    a = b;

    // Assign stored value of 'a' (temp) to 'b'
    b = temp;

    // Display values after swapping
    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;   // End of program
}