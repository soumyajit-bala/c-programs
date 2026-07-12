/*
 * Program: Calculate the value of Celsius <--> Fahrenheit.
 * Description: Accepts celsius or fahrenheit value from user 
 *              and returns the opposite value back.
 */

 #include <stdio.h>
float celsius_to_fahrenheit(float temperature);
float fahrenheit_to_celsius(float temperature);

int main() {

    int choice;
    float temperature;

    printf("Choose option 1 for Celsius to Fahrenheit and 2 for vice versa: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: 
        printf("Enter your celsius value: ");
        scanf("%f", &temperature);
        printf("The fahrenheit value is: %.2f\n", celsius_to_fahrenheit(temperature));
        break;

        case 2: 
        printf("Enter your fahrenheit value: ");
        scanf("%f", &temperature);
        printf("The celsius value is: %.2f\n", fahrenheit_to_celsius(temperature));
        break;
        default: 
        printf("Enter valid number\n");
    }

    return 0;
}

float celsius_to_fahrenheit(float temperature) {
    
    return ((temperature * 9) / 5) + 32;
}

float fahrenheit_to_celsius(float temperature) {

    return (5 * (temperature - 32)) / 9;
}