/*
Name; Vincent ochieng Owigo 
Reg number ; PA106/G/28807/25
Description ; Program to display data bundles and their cost for customers purchase 

*/

#include<stdio.h>

int main(){

  int data_bundles;
  
  printf("enter your bundles_choice:\n");
  printf("1.100MB @ 50KES\n");
  printf("2.500MB @200KES\n");
  printf("3.1GB @ 350KES\n");
  printf("4.2GB @ 600KES\n");
  
  printf("\nenter your choice(1-4):");
  scanf("%d",&data_bundles);
  
  switch(data_bundles) 
  {
  case 1:
     printf("you selected 100MB.cost=50KES\n");
     break;
  case 2:
     printf("you selected 500MB.cost=200KES\n");
     break;
  case 3:
     printf("you selected 1GB.cost=350KES\n");
     break;
  case 4:
     printf("you selected 2GB.cost=600KES\n");
     break;
  default:
     printf("invalid choice please try again");
     
  }      

   return 0;

}