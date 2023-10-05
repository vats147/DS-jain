/*


       Author: Vatsal Mangukiya
       Date: 2nd October,2023

       Question: 35.	C program using recursion to find x^y.

*/
#include <stdio.h>
int factorial(int number)
{
       if (number <= 1)
       {
              return number;
       }
       else
              return factorial(number - 1) + factorial(number - 2);
}
int main()
{

       int n;

       printf("Enter the value of N to find the Nth Fibonacci number: ");
       scanf("%d", &n);

       int result = fibonacci(n);
       printf("The %dth Fibonacci number is: %d\n", n, result);
}