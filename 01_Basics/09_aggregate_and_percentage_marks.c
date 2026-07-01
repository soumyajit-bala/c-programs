/*This program calculates the aggregate and percentage marks of a student based on their
marks in five subjects. It reads the marks from the user, computes the total, and them*/



#include <stdio.h>

int main()
{
    float marks1, marks2, marks3, marks4, marks5;
    float aggregate, percentage;

    // Input marks of five subjects
    printf("Enter marks of five subjects:\n");
    scanf("%f %f %f %f %f", 
          &marks1, &marks2, &marks3, &marks4, &marks5);

    // Calculate aggregate marks
    aggregate = marks1 + marks2 + marks3 + marks4 + marks5;

    // Calculate percentage
    percentage = (aggregate / 500) * 100;

    // Display results
    printf("Aggregate Marks = %.2f\n", aggregate);
    printf("Percentage Marks = %.2f%%\n", percentage);

    return 0;
}