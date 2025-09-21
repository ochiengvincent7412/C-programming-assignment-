//program displaying my personal details 

/*
Name ; Vincent Ochieng 
Reg number ;PA106/G/28807/25
Description ; Program displaying my personal details 
*/

#include<stdio.h>

int main()
{
//input
int age; // age in years 
float height; // height in meters 
int ID_number;// ID number 
float bank_balance;// balance in shilling 
//output the details 
    printf("enter your age;");
    scanf("%d", &age);
    
    printf("enter your height(in metres);");
    scanf("%f", &height);
    
    printf("enter your ID_number;");
    scanf("%d", &ID_number);
    
    printf("enter your bank balance;");
    scanf("%f", &bank_balance);
    
    //output 
    printf("\n___personal details___\n");
    printf("age; %d years\n", age);
    printf("height; %.2f m\n", height);
    printf("ID Number; %d\n", ID_number);
    printf("bank balance; %.2f shillings\n", bank_balance);
    
    
    return 0;
}    