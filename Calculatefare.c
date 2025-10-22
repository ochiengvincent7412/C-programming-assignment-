/*
Name Vincent ochieng Owigo 
Registration number ;PA106/G/28807/25
Description ; program to calculate fare
*/

#include <stdio.h>

/* 
 * calculateFare: takes distance in kilometers (double) and returns fare.
 * Fare rate: 50 KSh per kilometer.
 * If distance is negative, returns 0.
 */
double calculateFare(double distanceKm) {
    const double RATE_PER_KM = 50.0;
    if (distanceKm <= 0.0) return 0.0;
    return distanceKm * RATE_PER_KM;
}

int main(void) {
    double km;
    printf("Enter distance traveled (km): ");
    if (scanf("%lf", &km) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    double fare = calculateFare(km);
    printf("Total fare for %.2f km = KSh %.2f\n", km, fare);

    return 0;
}