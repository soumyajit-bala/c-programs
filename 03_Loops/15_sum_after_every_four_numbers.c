
/*
 * Program: Calculate the sum of a special series.
 * Description: Accepts a positive integer n and evaluates the series:
 *              1 + 2 + 3 + 4 + 10 + 5 + 6 + 7 + 8 + 26 + ...
 *              where after every four consecutive numbers,
 *              their sum is inserted into the series.
 */

 #include<stdio.h>

int main() {
    
    int i, n, group_sum = 0; 
    int total_sum = 0;

    printf("Enter your nth term: ");
    scanf("%d", &n);

    printf("The series is: ");

    for(i = 1; i <= n; i++) {
        
        group_sum += i;  
        total_sum += i;


        // Always print the current number
        printf("%d ", i);
        
        // Check if we just printed a multiple of 4
        if(i % 4 == 0) {
            printf("%d ", group_sum);
            
            total_sum += group_sum;     // Add the inserted group sum to the total series sum

            group_sum = 0;      // Reset the group sum for the next group of four numbers
        } 

    }
    printf("\nSum of the series is: %d\n", total_sum);

    return 0;
}