/*
Name;Vincent Ochieng Owigo 
Reg number;PA106/G/28807/25
Description; while loop program to check withdrawal balance after every transaction 
*/

#include <stdio.h>

int main() {
    float balance = 80000.0; // initial account balance
    float withdraw;
    printf("=== Welcome to Vincent Bank ===\n");

    while (balance > 0) {
        printf("\nCurrent balance: %.2f\n", balance);
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdraw);

        if (withdraw <= 0) {
            printf("Invalid amount. Try again.\n");
        } 
        else if (withdraw > balance) {
            printf("Insufficient balance! You only have %.2f\n", balance);
        } 
        else {
            balance -= withdraw;
            printf("Withdrawal successful! New balance: %.2f\n", balance);
        }
    }

    printf("\nYour account balance is now zero. Transaction ended.\n");

    return 0;
}