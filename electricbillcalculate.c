/*
Name; Vincent ochieng Owigo 
Registration number PA106/G/28807/25
Description ; calculateElectricBill
*/

#include <stdio.h>

/* 
 * calculateElectricBill: returns total bill (in KSh) for given unitsConsumed.
 * Pricing:
 *  - first 100 units: 10 KSh per unit
 *  - next 100 units: 15 KSh per unit
 *  - above 200 units: 20 KSh per unit
 */
long calculateElectricBill(long unitsConsumed) {
    long bill = 0;

    if (unitsConsumed <= 0) {
        return 0;
    }

    if (unitsConsumed <= 100) {
        bill = unitsConsumed * 10L;
    } else if (unitsConsumed <= 200) {
        bill = 100L * 10L + (unitsConsumed - 100L) * 15L;
    } else {
        bill = 100L * 10L + 100L * 15L + (unitsConsumed - 200L) * 20L;
    }

    return bill;
}

int main(void) {
    long units;
    printf("Enter number of units consumed: ");
    if (scanf("%ld", &units) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    long total = calculateElectricBill(units);
    printf("Total bill for %ld units = KSh %ld\n", units, total);

    return 0;
}