/*
 * Program: Find the maximum and minimum of three numbers using functions.
 * Description: Accepts three integers from the user and determines
 *              the largest and smallest values using separate functions.
 */

 #include <stdio.h>
int maximum(int a, int b, int c);
int minimum(int a, int b, int c);

int main() {

    int a, b, c;

    printf("Enter three numbers using space-bar: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Maximum = %d\n", maximum(a,b,c));
    printf("Minimum = %d\n", minimum(a,b,c));

    return 0;
}

int maximum(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;

    if (b >= a && b >= c)
        return b;

    return c;
}

int minimum(int a, int b, int c) {

    if (a <= b && a <= c)
        return a;

    if (b <= a && b <= c)
        return b;

    return c;
}