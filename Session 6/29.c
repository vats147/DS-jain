/*
       
       Remain
       Author: Vatsal Mangukiya
       Date: 2nd October,2023

       Question:     29.	C program using functions to find GCD and LCM of two numbers.

*/
#include <stdio.h>


int findGCD(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int findLCM(int a, int b)
{
    int gcd = findGCD(a, b);
    int lcm = (a * b) / gcd;
    return lcm;
}

int main()
{
    int num1, num2;

    printf("Enter two numbers to find their GCD and LCM: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0)
    {
        printf("Please enter positive integers.\n");
    }
    else
    {
        int gcd = findGCD(num1, num2);
        int lcm = findLCM(num1, num2);

        printf("GCD of %d and %d is: %d\n", num1, num2, gcd);
        printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
    }

    return 0;
}
