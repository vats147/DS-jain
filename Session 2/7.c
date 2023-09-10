/*
       Author: Vatsal Mangukiya
       Date: 4th sept,2023

       Question: 1.	C program to find the largest of three numbers (if).
*/
#include<stdio.h>
int largest(int num1,int num2,int num3)
{
       if(num1 == num2 && num1==num3)
       {      
              printf("All number are same\n");
       }
       else if(num1==num2)
       {
              if(num1>num3)
              {
                     printf("num1=%d and num2=%d are same largest among three\n",num1,num2);
              }
              else
              {
                     printf("num3 =%d is largest\n",num3);

              }
       }
       else if(num2==num3)
       {
              if(num2>num1)
              {
                     printf("num2=%d and num3=%d are largest among three\n",num2,num3);
              }
              else
              {
                      printf("num1 =%d is largest\n",num1);
              }
       }
       else if(num1==num3)
       {
               if(num1>num2)
              {
                     printf("num3=%d and num1=%d are largest among three\n",num3,num1);
              }
              else
              {
                     printf("num2 =%d is largest\n",num2);
              }
       }
       else
       {
              if(num1>num2 && num1>num3)
              {
                     printf("num1 = %d is the largest number\n",num1 );
              }
              else if(num2>num3)
              {
                     printf("num2 =%d is largest\n",num2);
              }
              else
              {
                     printf("num3=%d is largest\n",num3);
              }
       }
}
int main(){

       int number1,number2,number3;

       printf("Enter first number:");
       scanf("%d",&number1);
       printf("Enter second number:");
       scanf("%d",&number2);
       printf("Enter thrid number:");
       scanf("%d",&number3);

       largest(number1,number2,number3);

       
}