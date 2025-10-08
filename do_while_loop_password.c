/*
Name; Vincent ochieng Owigo 
Reg number;PA106/G/28807/25
Description ;do while loop prompting the user to enter the password 
*/

#include <stdio.h>
#include <string.h>

int main() {
    char password[20];

    // Keep asking until user enters the correct password
    do {
        printf("Enter password: ");
        scanf("%s", password);

        if(strcmp(password, "1234") != 0) {
            printf("Wrong password! Try again.\n");
        }

    } while(strcmp(password, "1234") != 0);

    printf("Access Granted ✅\n");

    return 0;
}