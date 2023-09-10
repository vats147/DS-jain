/*
       Author: Vatsal Mangukiya
       Date: 10th sept,2023

       Question: 10.	C program to find the second largest and second smallest of four numbers (else-if).
*/
#include <stdio.h>

// Largest among 3 number
int largest(int num1, int num2, int num3)
{
       if (num1 == num2 && num1 == num3)
       {
              printf("All number are same\n");
       }
       else if (num1 == num2)
       {
              if (num1 > num3)
              {
                     printf("num1=%d and num2=%d are same largest among three\n", num1, num2);
              }
              else
              {
                     return num3;
              }
       }
       else if (num2 == num3)
       {
              if (num2 > num1)
              {
                     printf("num2=%d and num3=%d are largest among three\n", num2, num3);
              }
              else
              {
                     return num1;
              }
       }
       else if (num1 == num3)
       {
              if (num1 > num2)
              {
                     printf("num3=%d and num1=%d are largest among three\n", num3, num1);
              }
              else
              {
                     return num2;
              }
       }
       else
       {
              if (num1 > num2 && num1 > num3)
              {
                     return num1;
              }
              else if (num2 > num3)
              {
                     return num2;
              }
              else
              {
                     return num3;
              }
       }
}

// Smallest among 3
int smallest(int num1, int num2, int num3)
{
       if (num1 == num2 && num1 == num3)
       {
              printf("All number are same\n");
       }
       else if (num1 == num2)
       {
              if (num1 < num3)
              {
                     printf("num1=%d and num2=%d are same largest among three\n", num1, num2);
              }
              else
              {
                     return num3;
              }
       }
       else if (num2 == num3)
       {
              if (num2 < num1)
              {
                     printf("num2=%d and num3=%d are largest among three\n", num2, num3);
              }
              else
              {
                     return num1;
              }
       }
       else if (num1 == num3)
       {
              if (num1 < num2)
              {
                     printf("num3=%d and num1=%d are largest among three\n", num3, num1);
              }
              else
              {
                     return num2;
              }
       }
       else
       {
              if (num1 < num2 && num1 < num3)
              {
                     return num1;
              }
              else if (num2 < num3)
              {
                     return num2;
              }
              else
              {
                     return num3;
              }
       }
}

int second_largest(int num1, int num2, int num3, int num4)
{
       int second_largest = num1;
       int large = num1;

       if (num1 > num2 && num1 > num3 && num1 > num4)
       {
              large = num1;
              second_largest = largest(num2, num3, num4);
       }
       else if (num2 > num1 && num2 > num3 && num2 > num4)
       {
              large = num2;
              second_largest = largest(num1, num3, num4);
       }
       else if (num3 > num2 && num3 > num1 && num3 > num4)
       {
              large = num3;
              second_largest = largest(num2, num1, num4);
       }
       else if (num4 > num2 && num4 > num3 && num4 > num1)
       {
              large = num4;
              second_largest = largest(num2, num3, num1);
       }
       return second_largest;
}
int second_smallest(int num1, int num2, int num3, int num4)
{
       int second_smallest = num1;
       int small = num1;

       if (num1 < num2 && num1 < num3 && num1 < num4)
       {
              small = num1;
              second_smallest = smallest(num2, num3, num4);
       }
       else if (num2 < num1 && num2 < num3 && num2 < num4)
       {
              small = num2;
              second_smallest = smallest(num1, num3, num4);
       }
       else if (num3 < num2 && num3 < num1 && num3 < num4)
       {
              small = num3;
              second_smallest = smallest(num2, num1, num4);
       }
       else if (num4 < num2 && num4 < num3 && num4 < num1)
       {
              small = num4;
              second_smallest = smallest(num2, num3, num1);
       }
       return second_smallest;
}
int main()
{

       int number1, number2, number3, number4;
       int secondLargest,secondSmallest;
       printf("Enter first number:");
       scanf("%d", &number1);
       printf("Enter second number:");
       scanf("%d", &number2);
       printf("Enter thrid number:");
       scanf("%d", &number3);
       printf("Enter Fourth number:");
       scanf("%d", &number4);

       printf("\n-----------------\n");
       printf("Number 1: %d\n", number1);
       printf("Number 2: %d\n", number2);
       printf("Number 3: %d\n", number3);
       printf("Number 4: %d\n", number4);
       printf("\n-----------------\n");
       
       secondLargest=second_largest(number1, number2, number3, number4);
       secondSmallest=second_smallest(number1, number2, number3, number4);
       printf("Second largest number: %d\n", secondLargest);
       printf("Second smallest number: %d\n",secondSmallest);
}