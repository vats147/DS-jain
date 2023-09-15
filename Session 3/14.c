/*
       Author: Vatsal Mangukiya
       Date: 15th sept,2023

       Question: 14.	C program to output the digits of a number (while).
*/
#include<stdio.h>

int main(){

      int number;
      int temp;

      
      int rem;

       printf("Please Enter number :");
       scanf("%d",&number);

       temp=number;
      
       printf("\n----------------------\n");

       while(temp!=0)
       {
              rem=temp%10;
              printf("%d\n",rem);
              temp=temp/10;
       }
       
}