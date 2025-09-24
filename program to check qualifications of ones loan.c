/*
Name; Vincent ochieng Owigo 
Reg number;PA106/G/28807/25
Description; program to check if one qualifies for a loan or not
*/

#include<stdio.h>

int main()
{
  int age;
  float annual_income;
  
  printf("\nenter your age:"); 
  scanf("%d", &age);
  
  printf("\nenter annual_income:");
  scanf("%f", &annual_income);
  
  if(age>=21 && annual_income>=21000)
  {
  printf("congratulations you qualify for a loan");
  }
  
  else
  {
  printf("unfortunately,we are unable to offer you loan at this time\n");
  }
  
    return 0;
}