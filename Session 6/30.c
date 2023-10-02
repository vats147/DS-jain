/*
       

       Author: Vatsal Mangukiya
       Date: 2nd October,2023

       Question:     30.	C program using functions to convert a decimal number to its binary equivalent.

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
int main()
{

       int decimal;
      

       printf("Enter a integer decimal number: ");
       scanf("%d", &decimal);
       to_binary(decimal);

}