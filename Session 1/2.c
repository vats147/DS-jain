/*
       Author: Vatsal Mangukiya
       Date: 31st aug,2023

       Question: 2.	2.	C program to find the area and circumference of a circle.

*/
#include<stdio.h>

int main(){

       const float pi=3.14;
       float r;
       float area,circumference;

       printf("Enter the radius of circle");
       scanf("%f",&r);

       // Area of circle
       area=pi*r*r;
       printf("Area of circle: %f\n",area);

       //circumference of Circle
       circumference=2*pi*r;
       printf("Circumference of circle: %f\n",circumference);

       
}