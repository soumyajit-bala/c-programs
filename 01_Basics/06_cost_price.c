/*
 This program calculates the cost price of one item using the total selling
 price and total profit of 15 items.
*/

#include <stdio.h>

int main() {
    float total_selling_price, total_profit;
    float cost_price_per_item;

    // Input total selling price and total profit
    printf("Enter the total selling price of 15 items: ");
    scanf("%f", &total_selling_price);

    printf("Enter the total profit earned on them: ");
    scanf("%f", &total_profit);

    // Calculate cost price of one item
    cost_price_per_item = (total_selling_price - total_profit) / 15;

    // Output result
    printf("Cost price of one item = %.2f\n", cost_price_per_item);

    return 0;
}