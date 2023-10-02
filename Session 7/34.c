/*


       Author: Vatsal Mangukiya
       Date: 2nd October,2023

       Question:  34.	C program using recursion to find the factorial of a number.

*/
#include<stdio.h>
int factorial(int number)
{
       if(number <= 1)
       {
              return 1;
       }
       else
              return  number * factorial(number -1);
}
int main(){

       int number;
       printf("Please Enter Number:");
       scanf("%d",&number);

       printf("Number is %d",factorial( number));

              
       
       
}