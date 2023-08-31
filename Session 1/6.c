/*
       Author: Vatsal Mangukiya
       Date: 31st aug,2023

       Question 6: C program to calculate simple interest.
*/

#include<stdio.h>



int main(){

      int p,n;
      float r;

       printf("Enter the principal amount");
       scanf("%d",&p);
       printf("Enter the number of  months");
       scanf("%d",&n);
       printf("Enter Rate of interest");
       scanf("%f",&r);

       float Simple_Interst;
       Simple_Interst=p*r*n/100;   
       printf("Simple interest is %f",Simple_Interst);
      

}

