/*
Name ; Owigo Vincent Ochieng 
Reg number ;PA106/G/28807/25
Description ; program to calculate compound interest 
*/

#include<stdio.h>
#include<math.h>

int main()
{
 float compound_interest,principal_amount,rate,amount;
 int time,number_of_compounding_a_year;
 
 //input 
 
 printf("enter principal_amount(P): ");
 scanf("%f", &principal_amount);
 
 printf("enter rate(in %):");
 scanf("%f", &rate);
 
 printf("enter time in years (t):");
 scanf("%d", &time);
 
 printf("number_of_compounding_a_year(n):");
 scanf("%d", &number_of_compounding_a_year);
 
 rate=rate/100;
 
 amount=principal_amount*pow((1+rate/number_of_compounding_a_year),(number_of_compounding_a_year*time));
 
 compound_interest=amount-principal_amount;
 
 //output 
 printf("\ntotal_amount = %.2f", amount);
 printf("\ncompound_interest = %.2f", compound_interest);
 
    return 0;
 }  