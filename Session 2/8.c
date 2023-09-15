/*
       Author: Vatsal Mangukiya
       Date: 4th sept,2023

       Question: C program to check whether a given year is a leap year (if-else).
*/
#include<stdio.h>

// for bool datatype
#include <stdbool.h>

bool isleapyear(int year)
{
       if(year % 4 == 0 )
       {
              return true;
       }
       return false;
}
int main(){

      int year;
      printf("Enter year: ");
      scanf("%d",&year);

      isleapyear(year)?printf("%d is leap year",year):printf("%d is not leap year",year);

       
}