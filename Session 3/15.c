/*
       Author: Vatsal Mangukiya
       Date: 15th sept,2023

       Question:15.	C program to find the sum of all numbers from 1 to “N” (while).

*/
#include<stdio.h>

int main(){

       int number;
       int i=1;

       printf("Please Enter number :");
       scanf("%d",&number);

       while (i<=number)
       {
              printf("%d\n",i);
              i++;
       }
       
}