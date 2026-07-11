/*
 * Program: Swap two numbers using a function.
 * Description: Accepts two integers and swaps their values
 *              using a user-defined function.
 */

#include <stdio.h>
void swap(int a, int b);

int main() {

    int a, b;

    printf("Enter a and b using space-bar numbers: ");
    scanf("%d %d", &a, &b);

    swap(a, b);
    return 0;
}

void swap(int a, int b) {
    a = a+b;
    b = a - b;
    a = a - b;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}