/*
       Author: Vatsal Mangukiya
       Date: 31st aug,2023

       Question: 5.	C program to calculate the total salary of an employee given Allowance1 is 33% of Basic Pay, Allowance2 is 73% of Basic Pay and Deduction is 52% of Basic Pay.

*/

#include<stdio.h>



int main(){
       float allowance1,allowance2,deduction,basicpay;
       float salary;

       printf("Enter Your salary:");
       scanf("%f",&salary);

       allowance1=salary*(33/100);
       allowance2=salary*(73/100);
       deduction=salary*(52/100);

       basicpay=salary+allowance1+allowance2-deduction;
       
       printf("Your basic salary is : %f",basicpay);
}

