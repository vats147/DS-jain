/*

       Author: Vatsal Mangukiya
       Date: 30th sept,2023

       Question:24.	C program to generate prime numbers from 1 to “N”.




*/
#include <stdio.h>
int isPrime(int num)
{
       if (num <= 1)
       {
              return 0; // 0 and 1 are not prime numbers
       }
       for (int i = 2; i * i <= num; i++)
       {
              if (num % i == 0)
              {
                     return 0; // Not a prime number
              }
       }
       return 1; // Prime number
}

int main()
{

       int num;

       printf("Enter number: ");
       scanf("%d", &num);

       printf("Prime numbers from 1 to %d are:\n", num);
       for (int i = 2; i <= num; i++)
       {
              if (isPrime(i))
              {
                     printf("%d ", i);
              }
       }
}
