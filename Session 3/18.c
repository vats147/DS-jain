/*
       remain

       Author: Vatsal Mangukiya
       Date: 30th sept,2023

       Question: 17.	18.	C program to convert from (do-while)
              a.	Decimal to binary
              b.	Binary to decimal

*/
#include <stdio.h>
void to_binary(int num)
{
       int rem;
       int binary[32];
       int index = 0;
       int temp;
       temp = num;

       do
       {
              rem = temp % 2;

              binary[index] = rem;

              temp = temp / 2;
              index++;

       } while (temp != 0);

       for (int i = index - 1; i >= 0; i--)
       {
              printf("%d", binary[i]);
       }
}
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

       printf("Enter a integer decimal number: ");
       scanf("%d", &decimal);
       to_binary(decimal);

       printf("\n Enter binary number: ");
       scanf("%d", &binary);

       printf("binary number is %d", to_decimal(binary));
}