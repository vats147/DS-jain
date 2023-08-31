/*
       Author: Vatsal Mangukiya
       Date: 31st aug,2023

       Question: 4. C program to swap variable values of two variables
a.	Using a temporary variable
b.	Without Using a temporary variable


*/

#include<stdio.h>



int main(){

      int num1,num2,temp;
      num1=10;
      num2=20;
      
      printf("NUmber before swap\n");
      printf("Num 1: %d\n", num1);
      printf("Num 2: %d\n",num2);

      printf("\n ***** \n");
      printf(" Using Temporary Variable\n");

       temp=num1;
       num1=num2;
       num2=temp;

       printf("Num 1: %d\n", num1);
       printf("Num 2: %d\n",num2);

       printf("\n ***** \n");
       printf(" Using without temporary Variable\n");

       
       num2=num1+num2;
       num1=num2-num1;
       num2=num2-num1;

       

       printf("Num 1: %d\n", num1);
       printf("Num 2: %d\n",num2);



}

