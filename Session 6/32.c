/*


       Author: Vatsal Mangukiya
       Date: 2nd October,2023

       Question:   32.C program using functions to check whether a three digit number is an Armstrong number or not.
*/
#include <stdio.h>
#include <stdbool.h>
int reverse(int number);

bool is_armstrong(int number)
{
       int reverse_number=reverse(number);
       
       if(reverse_number==number)
              return true;
       else
              return false;

}
int main()
{

       int number;

       printf("\n Enter  number: ");
       scanf("%d", &number);

       is_armstrong(number) ? printf("%d Number is armstrong number\n", number) : printf("%d Number is not armstrong number\n", number);
}
int reverse(int number)
{
       int temp,rem,reverse=0;
       temp=number;
       while(temp!=0)
       {
              rem=temp%10;
              
              reverse=reverse*10+rem;
              temp=temp/10;

       }
       return reverse;
}