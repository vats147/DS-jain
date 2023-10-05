/*
       Remain
       Author: Vatsal Mangukiya
       Date: 30th sept,2023

       Question: 23.	C program to find the sum of the series (for)
                     a.	SIN(X)
                     b.	COS(X)



*/
#include <stdio.h>
#include <math.h>

int main() {
    double x, sum = 0;
    int n;

    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Calculate sin(x) using the series expansion
    for (int i = 0; i < n; i++) {
        int exponent = 2 * i + 1;
        double term = pow(-1, i) * pow(x, exponent) / tgamma(exponent + 1); 
        sum += term;
    }

    printf("sin(%lf) = %lf\n", x, sum);

    return 0;
}
