/* 
 Ramesh's basic salary is input through the keyboard.
 Dearness allowance is 40% of basic salary and
 house rent allowance is 20% of basic salary.
 This program calculates the gross salary.
*/

#include <stdio.h>

int main() {
    float basic_salary, dearness_allowance, house_rent_allowance, gross_salary;

    // Input basic salary
    printf("Enter Ramesh's basic salary: ");
    scanf("%f", &basic_salary);

    // Calculate allowances
    dearness_allowance = 0.40 * basic_salary;
    house_rent_allowance = 0.20 * basic_salary;

    // Calculate gross salary
    gross_salary = basic_salary + dearness_allowance + house_rent_allowance;

    // Output result
    printf("Ramesh's gross salary = %.2f\n", gross_salary);

    return 0;
}
