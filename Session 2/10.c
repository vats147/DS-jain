/*
       Author: Vatsal Mangukiya
       Date: 4th sept,2023

       Question: 10.	C program to find the second largest and second smallest of four numbers (else-if).
*/
#include<stdio.h>

int second_largest_second_smallest(int num1,int num2,int num3,int num4)
{
       int second_largest=num1;
       int array[4];
       int index=0;
       if(num1>num2 && num1>num3 && num1> num4)
       {
              array[index]=num1;
       }
       
       if(second_largest>num2)
       {
              if(second_largest>num3)
              {
                     if(second_largest>num4)
                     {
                            
                     }
              }
       }

}
int main(){

       int number1,number2,number3,number4;

       printf("Enter first number:");
       scanf("%d",&number1);
       printf("Enter second number:");
       scanf("%d",&number2);
       printf("Enter thrid number:");
       scanf("%d",&number3);
       printf("Enter Fourth number:");
       scanf("%d",&number4);

       second_largest_second_smallest(number1,number2,number3,number4);

       
}