/*

       Author: Vatsal Mangukiya
       Date: 15th sept,2023

       Question: 20.	C program to check whether a number is prime or not (for).

*/
#include<stdio.h>
#include <stdbool.h>

bool is_prime(int number)
{
       for(int i=2;i<number;i++)
       {
              if(number%i==0)
              {
                     if(number==i)
                     {
                            return true;
                     }else
                     {
                            return false;
                     }
              }
       }
       return true;
}
int main(){

       int number;
       
       printf("Enter number: ");
       scanf("%d",&number);

       
       is_prime(number)?printf("Number is prime number"):printf("Number is not prime number");
       
       
       
}