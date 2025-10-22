/*
Name; Vincent ochieng Owigo 
Registration number ;PA106/G/28807/25
Description ; program to convert Fahrenheit to Celsius 
*/
#include <stdio.h>

/* 
 * convertToCelsius: converts Fahrenheit temperature to Celsius.
 * Uses floating point arithmetic for fractional temperatures.
 */
double convertToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main(void) {
    double f;
    printf("Enter temperature in Fahrenheit: ");
    if (scanf("%lf", &f) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    double c = convertToCelsius(f);
    printf("%.2f F = %.2f C\n", f, c);

    return 0;
}