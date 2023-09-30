/*
       
       Author: Vatsal Mangukiya
       Date: 30th sept,2023

       Question: 21.	C program to generate first “N” Fibonacci numbers (for).


*/
#include<stdio.h>


void fibonacci_Series(int number)
{
       int sum=0;
       int start=1;
       
      for(int i=1;i<=number;i++)
      {
              
              sum=start+sum;
              start=sum-start;
              if(i==1)
              {
                     printf("%d ",0);
                     continue;

              }
              printf(" %d ",sum);

      }
      
}
int main(){

       int number;
       
       printf("Enter number: ");
       scanf("%d",&number);

       fibonacci_Series(number);
       
       
       
       
}