/*
       Author: Vatsal Mangukiya
       Date: 15th sept,2023

       Question:16.	C program to reverse a number (while).).

*/
#include<stdio.h>

int main(){

       int number;
       int temp;

      
       int rem;
       int reverse=0;

       printf("Please Enter number :");
       scanf("%d",&number);

       temp=number;
      
       printf("\n----------------------\n");

       while(temp!=0)
       {
              rem=temp%10;
              
              reverse=reverse*10+rem;
              temp=temp/10;

       }
       printf("Reverse number %d",reverse);
       
       
}