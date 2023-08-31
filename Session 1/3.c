/*
       Author: Vatsal Mangukiya
       Date: 31st aug,2023

       Question: 2.C program to convert centigrade into Fahrenheit. Formula: F= (1.8 * C) +32.

*/
#include<stdio.h>

float convert_faherenheit(float celcius){
       return (1.8*celcius)+32;

}

int main(){

       float celcius;

       // Assume celcius is 10
       celcius=10;
       printf("%f convert into Ferenheit= %f\n" ,celcius,(celcius));
       
}