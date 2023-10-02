/*


       Author: Vatsal Mangukiya
       Date: 2nd October,2023

       Question:37.	C program using recursion to find the sum of natural numbers.

*/
#include<stdio.h>
int sum_of_natural(int number)
{
       if(number <= 1)
       {
              return 1;
       }
       else
              return   number +sum_of_natural(number -1);
}
int main(){

       int number;
       printf("Please Enter Number:");
       scanf("%d",&number);

       printf("sum of natural number  is %d",sum_of_natural( number));

              
       
       
}