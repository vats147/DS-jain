/*
       Author: Vatsal Mangukiya
       Date: 15th sept,2023

       Question:16.	C program to reverse a number (while).).

*/
#include<stdio.h>
int reverse(int number)
{
       int temp,rem,reverse=0;
       temp=number;
       while(temp!=0)
       {
              rem=temp%10;
              
              reverse=reverse*10+rem;
              temp=temp/10;

       }
       return reverse;
}
int main(){

       int number;
       

       printf("Please Enter number :");
       scanf("%d",&number);


       printf("Reverse number %d",reverse(number));
       
       
}