/*

       Author: Vatsal Mangukiya
       Date: 15th sept,2023

       Question: 19.	C program to find the factorial of a number (for).

*/
#include<stdio.h>
int factorial(int number)
{
       long int factorial=1;
       for(int i=number;i>0;i--)
       {
              factorial*=i;
       }
       return factorial;
}
int main(){

        int number;
              int fac;
       printf("Enter number: ");
       scanf("%d",&number);

       fac=factorial(number);

       printf("Factorial of (%d) is %d",number,fac);
       
       
       
       
}