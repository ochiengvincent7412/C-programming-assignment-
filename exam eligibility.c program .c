/*
Name; Vincent Ochieng Owigo 
Reg number ;PA106/G/28807/25
Description ; program to check eligibility for a student to sit for final exams 
*/

#include<stdio.h>
int main(){

   int attendance_rate;
   float average_marks;
  
  printf("enter your average_marks:");
  scanf("%f", &average_marks); 
   
   
 printf("enter your attendance_rate:");  
 scanf("%d", &attendance_rate);
 
 if(attendance_rate>=75 && average_marks>=40)
 {
   printf("eligible for final exam");
 }
 
 else{
 printf("not eligible");
 }

   return 0;
}