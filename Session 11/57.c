/*


       Author: Vatsal Mangukiya
       Date: 3rd October,2023

       Question: 57.	C program to find the area and circumference of a circle using pointers and functions.



*/
#include <stdio.h>
#define pi 3.14
float find_area(float *r)
{
      
       return (pi)*(*r)*(*r);
       
}
float find_area(float *r)
{

       return (2)*(pi)*(*r);
       
}


int main(){

       
       float r;
       float area,circumference;

       printf("Enter the radius of circle");
       scanf("%f",&r);

       // Area of circle
       area=find_area(&r);
       printf("Area of circle: %f\n",area);

       //circumference of Circle
       circumference=find_area(&r);
       printf("Circumference of circle: %f\n",circumference);

       
}
