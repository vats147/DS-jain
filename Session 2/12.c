/*
       Author: Vatsal Mangukiya
       Date: 10th sept,2023

       Question: 12.	C program to find the roots of a quadratic equation (else-if)

*/
#include<stdio.h>
#include<math.h>

int main(){

      double a,b,c;
      double discriminant,root1,root2;

      printf("Enter coefficients a,b and c:");
      scanf("%lf %lf %lf",&a,&b,&c);

       // Calculate Discriminant
       discriminant=b*b-4*a*c;

       //check roots are real 
       if(discriminant>0)
       {
               
              root1 = (-b + sqrt(discriminant)) / (2 * a);
              root2 = (-b - sqrt(discriminant)) / (2 * a);
              printf("Root 1 = %.2lf and Root 2 = %.2lf\n", root1, root2);
       }
       else if(discriminant==0){
              // One root real both are same
              root1 = -b / (2 * a);
              printf("Root 1 = Root 2 = %.2lf\n", root1);
       }
       else{
              // Complex roots
              double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Root 1 = %.2lf + %.2lfi and Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);
       }

       
}