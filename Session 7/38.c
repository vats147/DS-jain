/*


       Author: Vatsal Mangukiya
       Date: 2nd October,2023

       Question:38.	C program using recursion to count the digits of a number.


*/
#include<stdio.h>
int count_digit(int number)
{
       static int i=0;
       if(number <= 1)
       {
              return i;
       }
       else
       {
              i++;
              return   count_digit(number/10);
       }
}
int main(){

       int number;
       printf("Please Enter Number:");
       scanf("%d",&number);

       printf("Number is %d",count_digit( number));

              
       
       
}