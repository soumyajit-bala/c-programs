/* 
 The distance between two cities (in kilometers) is input through the keyboard.
 This program converts the distance into meters, feet, inches, and centimeters.
*/

#include <stdio.h>

int main() {
    float distance_km;
    float distance_meters, distance_feet, distance_inches, distance_centimeters;

    // Input distance in kilometers
    printf("Enter the distance in kilometers: ");
    scanf("%f", &distance_km);

    // Convert distance into different units
    distance_meters = distance_km * 1000;
    distance_centimeters = distance_km * 100000;
    distance_feet = distance_km * 3280.84;
    distance_inches = distance_km * 39370.1;

    // Display results
    printf("Distance in meters: %.2f m\n", distance_meters);
    printf("Distance in centimeters: %.2f cm\n", distance_centimeters);
    printf("Distance in feet: %.2f ft\n", distance_feet);
    printf("Distance in inches: %.2f in\n", distance_inches);

    return 0;
}