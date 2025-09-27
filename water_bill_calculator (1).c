/*
Name ; Vincent ochieng Owigo 
Reg number ;PA106/G/28807/25
Description ; program to make decision of total water bill to be paid by a consumer 
*/

#include<stdio.h>

int main()
{
    int units_consumed;
    float total_bill,amount; 
    
  //input  
  printf("\nenter units_consumed:"); 
  scanf("%d", &units_consumed);
  
  //decision making using if,else if
  if(units_consumed<=30) {
  amount=20;
  }
  
  else if(units_consumed>30 && units_consumed<=60){
  amount=25;
  }
  else if(units_consumed>60){
  amount=30;
  }
  
  //calculation of total_bill
  total_bill=amount*units_consumed;
  
  //output 
  printf("\n-----units_consumed and total_bill-----\n");
  printf("enter units_consumed:%d\n",units_consumed);
  printf("total_bill is: Ksh.%.2f\n", total_bill);
  
    return 0;
}