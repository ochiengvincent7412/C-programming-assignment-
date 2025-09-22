/*
Name ; Owigo Vincent Ochieng 
Reg number ;PA106/G/28807/25
Description ; program to calculate volume and surface area of a cylinder 
*/

#include<stdio.h>
#include<math.h>

int main()
{
float radius,height,surface_area,volume;
float PI=3.142; 

//input 

    printf("enter radius of cylinder:");
    scanf("%f", &radius);
    
    printf("enter height of cylinder:");
    scanf("%f", &height);
    
    //calculation 
    volume=PI*radius*radius*height;
    
    surface_area=2*PI*radius*(radius+height);
    //output 
    printf("surface_area= %.2f\n", surface_area);
    printf("volume=%.2f\n", volume);
    
    return 0;
}