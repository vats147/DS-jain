/*
       Author: Vatsal Mangukiya
       Date: 4th sept,2023

       Question: 9.	C program to find the largest, smallest and second largest of three numbers.
*/
#include<stdio.h>

int largest(int num1,int num2,int num3)
{
       if(num1 == num2 && num1==num3)
       {      
              printf("All number are same\n");
       }
       else if(num1==num2 || num2==num3 || num3==num1)
       {
              if(num1==num2)
              {
                     if(num1>num3)
                     {
                            printf("num1=%d and num2=%d are the same and largest \n",num1,num2);
                            printf("num3=%d is the second largest and smallest",num3);
                     }
                     else
                     {
                            printf("num3=%d is the  largest \n",num3);
                            printf("num1=%d and num2=%d are the second largest and smallest \n",num1,num2);
                     }
              }
              else if(num2==num3)
              {
                     if(num2>num1)
                     {
                            printf("num2=%d and num3=%d are the same and largest \n",num2,num3);
                            printf("num1=%d is the second largest and smallest",num1);
                     }
                     else
                     {
                            printf("num1=%d is the  largest \n",num1);
                            printf("num2=%d and num3=%d are the second largest and smallest \n",num2,num3);
                     }
              }
              if(num3==num1)
              {
                     if(num3>num2)
                     {
                            printf("num3=%d and num1=%d are the same and largest \n",num3,num1);
                            printf("num2=%d is the second largest and smallest",num2);
                     }
                     else
                     {
                            printf("num2=%d is the  largest \n",num2);
                            printf("num3=%d and num1=%d are the second largest and smallest \n",num3,num1);
                     }
              }
       }
       
       else if(num1>num2 && num1>num3)
       {
              // num1 is big 
              printf("num1=%d is the largest\n",num1);
              if(num2>num3)
              {
                     printf("num2=%d is the second largest\n",num2);
                     printf("num3=%d is the smallest\n",num3);
              }
              else
              {
                     printf("num3=%d is the second largest\n",num3);
                     printf("num2=%d is the smallest\n",num2);
              }
       }
       else if(num2>num1 && num2>num3)
       {
              // num1 is big 
              printf("num2=%d is the largest\n",num2);
              if(num1>num3)
              {
                     printf("num1=%d is the second largest\n",num1);
                     printf("num3=%d is the smallest\n",num3);
              }
              else
              {
                     printf("num3=%d is the second largest\n",num3);
                     printf("num1=%d is the smallest\n",num1);
              }
       }
       else if(num3>num1 && num3>num2)
       {
              // num1 is big 
              printf("num3=%d is the largest\n",num3);
              if(num1>num2)
              {
                     printf("num1=%d is the second largest\n",num1);
                     printf("num2=%d is the smallest\n",num2);
              }
              else
              {
                     printf("num2=%d is the second largest\n",num2);
                     printf("num1=%d is the smallest\n",num1);
              }
       }
}
int main(){

       float number1,number2,number3;

       printf("Enter first number:");
       scanf("%f",&number1);
       printf("Enter second number:");
       scanf("%f",&number2);
       printf("Enter thrid number:");
       scanf("%f",&number3);

       largest(number1,number2,number3);

       
}