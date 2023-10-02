/*
       

       Author: Vatsal Mangukiya
       Date: 2nd October,2023

       Question:   31.	C program using functions to convert a binary number to its decimal equivalent.
*/
#include <stdio.h>
int to_decimal(int binary)
{

       int rem;
       int base = 1;
       int to_decimal;

       do
       {
              rem = binary % 10;
              to_decimal += rem * base;
              base *= 2;
              binary /= 10;

       } while (binary != 0);

       return to_decimal;
}
int main()
{

       int decimal;
       int binary;

      printf("\n Enter binary number: ");
       scanf("%d", &binary);

       printf("binary number is %d", to_decimal(binary));

}